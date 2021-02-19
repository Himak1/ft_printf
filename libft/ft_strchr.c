/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:21:06 by jhille        #+#    #+#                 */
/*   Updated: 2020/11/25 21:18:50 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	charac;
	char	*strptr;

	i = 0;
	strptr = (char*)str;
	charac = (char)c;
	while (strptr[i] != '\0')
	{
		if (strptr[i] == charac)
			return (&strptr[i]);
		i++;
	}
	if (strptr[i] == charac)
		return (&strptr[i]);
	else
		return (NULL);
}
