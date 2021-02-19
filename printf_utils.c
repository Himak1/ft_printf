/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf_utils.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 00:29:47 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/15 20:17:24 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "libft/libft.h"

char	*ft_strrealloc(char *ptr, size_t newsize)
{
	char	*ret;

	if (newsize == 0)
	{
		free(ptr);
		return (ft_calloc(1, 1));
	}
	newsize++;
	ret = malloc(newsize * sizeof(char));
	if (ret == 0)
	{
		free(ptr);
		return (0);
	}
	ft_strlcpy(ret, ptr, newsize);
	if (ft_strlen(ptr) < newsize)
		ret[newsize - 1] = '\0';
	free(ptr);
	ptr = ret;
	return (ret);
}

void	strctzero(c_lst *ptr, char **store)
{
	*store = 0;
	ptr->flags = 0;
	ptr->width = 0;
	ptr->prec = -1;
	ptr->conv = 0;
}
