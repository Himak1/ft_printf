/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 21:06:09 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/16 11:19:55 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{
/*
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	printf(" --- Return : %d\n", ft_printf("%p, %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", n, i, j, k, l, m, n, c, c, j, j, j)); //T2
	printf(" --- Return : %d\n", printf("%p, %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", n, i, j, k, l, m, n, c, c, j, j, j)); //T2
*/
	printf("%d", printf("%100000000000000000d", 12));
}
