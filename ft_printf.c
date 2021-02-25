/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 19:50:45 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/24 21:12:57 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"

int	printlen(const char *str, int len, va_list args, t_strct *lst)
{
	int	ret;

	ret = 0;
	while (str[len] != '\0')
	{
		if (str[len] == '%')
			ret = varcheck(str, len + 1, args, lst);
		if (ret == -1)
			return (-1);
		else if (ret == 1)
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

static char	*store_join(char *store, t_strct *lst, va_list args)
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

int	ft_vfprintf(int fd, const char *format, va_list args)
{
	int				i;
	int				pos;
	char			*store;
	struct s_trct	lst;

	i = 0;
	store = 0;
	while (format[0] != '\0' && i != -1)
	{
		strctzero(&lst);
		pos = printlen(format, 0, args, &lst);
		if (pos > 0)
			store = ft_substr(format, 0, pos);
		if (pos != -1 && format[pos] == '%')
		{
			store = store_join(store, &lst, args);
			ft_skipchar(format, &pos);
		}
		else if (pos != -1)
			lst.width = ft_strlen(store);
		if (pos != -1)
			i += write(fd, store, lst.width);
		return_check(&format, &store, &pos, &i);
	}
	return (i);
}

int	ft_printf(const char *format, ...)
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
