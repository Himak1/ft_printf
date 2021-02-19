/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 19:50:45 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/19 12:03:47 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"

int			printlen(const char *str, int len, va_list args, c_lst *lst)
{
	int	ret;

	ret = 0;
	while (str[len] != '\0')
	{
		ret = varcheck(str, len + 1, args, lst);
		if (ret == -1)
			return (-1);
		if (str[len] == '%' &&  ret == 1)
			break ;
		len++;
	}
	return (len);
}

static void	ft_skipchar(const char *format, int *pos)
{
	*pos += 1;
	while (ft_strchr(CONVS, format[*pos]) == 0 && format[*pos] != '\0')
		*pos += 1;
	*pos += 1;
}

static char	*store_join(char *store, c_lst *lst, va_list args)
{
	char	*temp1;
	int		len;

	temp1 = varjoin(lst, args);
	if (store != 0)
		len = ft_strlen(store);
	else
		len = 0;
	if (temp1 != 0 && store != 0)
	{
		store = ft_strrealloc(store, len + lst->width);
		if (store != 0)
			ft_memcpy(store + len, temp1, lst->width);
		free(temp1);
		lst->width += len;
	}
	else if (temp1 != 0)
		store = temp1;
	if (temp1 == 0)
		ft_resetptr((void**)&store);
	return (store);
}

int			ft_vfprintf(int fd, const char *format, va_list args)
{
	int				i;
	int				pos;
	char			*store;
	struct varlist	lst;

	i = 0;
	strctzero(&lst, &store);
	pos = printlen(format, 0, args, &lst);
	if (pos == -1)
		return (-1);
	if (format[0] != '%')
		store = ft_substr(format, 0, pos);
	if (format[pos] == '%')
	{
		store = store_join(store, &lst, args);
		ft_skipchar(format, &pos);
	}
	else
		lst.width = ft_strlen(store);
	i = write(fd, store, lst.width);
	if (store != 0)
		free(store);
	else
		i = -1;
	return (return_check(format, i, pos, args));
}

int			ft_printf(const char *format, ...)
{
	int		ret;
	va_list	args;

	if (format == 0)
		return (-1);
	va_start(args, format);
	ret = ft_vfprintf(1, format, args);
	va_end(args);
	return (ret);
}
