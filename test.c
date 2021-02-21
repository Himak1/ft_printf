/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 21:06:09 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/21 20:18:59 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{

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

	int	ret1;
	int	ret2;

	ret1 = ft_printf("%%, \t, \\, \", \', +");
	printf("\n");
	ret2 = printf("%%, \t, \\, \", \', +");

	printf("\n");

	ret1 = ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", h, "bada", r, p, r, r, i, r, i, r, i);
	printf("\n");
	ret2 = printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", h, "bada", r, p, r, r, i, r, i, r, i);

	printf("\n");

	ret1 = ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);
	printf("\n");
	ret2 = printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i);

	printf("\n");

	ret1 = ft_printf("%i, %d, %d, %d, %d, %d, %u, %x, %X", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("\n");
	ret2 = printf("%i, %d, %d, %d, %d, %d, %u, %x, %X", 0, 0, 0, 0, 0, 0, 0, 0, 0);

/*
	PRINT(" --- Return : %d\n", PRINT("%*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0));
	PRINT(" --- Return : %d\n", PRINT("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
	PRINT(" --- Return : %d\n", PRINT("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL));
	// ^ Theoriquement un comportement indefini mais testé par la moulinette
    PRINT(" --- Return : %d\n", PRINT("(null)"));
	PRINT(" --- Return : %d\n", PRINT(""));

	ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d); //T16

	printf(" --- Return : %d\n", ft_printf("%p, %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", n, i, j, k, l, m, n, c, c, j, j, j)); //T2
	printf(" --- Return : %d\n", printf("%p, %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", n, i, j, k, l, m, n, c, c, j, j, j)); //T2

	printf("%d", printf("%100000000000000000d", 12));
*/
}
