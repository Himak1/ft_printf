/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 13:16:44 by jhille        #+#    #+#                 */
/*   Updated: 2020/11/25 20:56:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*srcptr;
	unsigned char		cptr;

	i = 0;
	srcptr = (unsigned char*)src;
	cptr = (unsigned char)c;
	while (i < n && srcptr[i] != cptr)
	{
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return (&srcptr[i]);
}
