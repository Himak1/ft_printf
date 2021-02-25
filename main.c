/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 00:54:08 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/25 13:13:47 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
/*
int	main(void)
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

	ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d); //T16
	printf("\n");
	printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d); //T16

	return (0);
}
*/
int	main(void)
{
	int	ret;
	int	r00;

	r00 = 12;

	ret = ft_printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);
	printf("\n");
	ret = printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);
/*
	ret = ft_printf("5%");
	printf("\n5%\n");
	ret = ft_printf("%");
	printf("\n%\n");
	ret = ft_printf("%05");
	printf("\n%05\n");
	ret = ft_printf("%-05");
	printf("\n%-05\n");
	ret = ft_printf("%-5");
	printf("\n%-5\n");
*/	
	return (0);
}
