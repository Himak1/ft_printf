/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:09:38 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/19 01:15:19 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int	main(void)
{
	int	i;
	int	f;
	int	ptr;
	//char	buf[] = "hello";

	i = 0;
	f = 0;
	ptr = 0;

	i = ft_printf("%0*.*i\n", -8, -10, 23);
	write(1, "\n", 1);
	//f = printf("", -12, 23);

	printf("\n%d, %d", i, f);
/*
	i = ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	write(1, "\n", 1);
	f = printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("fake:%d\nreal:%d", i, f);
*/
/*
	ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", 10, "bada", "str", "yeet", 3, 4, 5, 6, 7, 8, 9);
	printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", 10, "bada", "str", "yeet", 3, 4, 5, 6, 7, 8, 9);
*/
/*
	ft_printf("%-00000-----.*d", 0, 0);
	printf("%-00000-----.*d", 0, 0);
*/
	//ft_printf("|yeet%5c|\n", 'c');
	//printf("|yeet%5c|\n", 'c');
/*
	i = ft_printf("|%2p|\n", buf);
	f = printf("|%2p|\n", buf);

	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%20p|\n", buf);
	f = printf("|%20p|\n", buf);

	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%20p|\n", NULL);
	f = printf("|%20p|\n", NULL);

	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%p|\n", NULL);
	f = printf("|%p|\n", NULL);

	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("%p\n", &ptr);
	f = printf("%p\n", &ptr);

	printf("\nfake:%d\nreal:%d\n", i, f);
*/
/*
	ft_printf("We are %*s students and we love %.*s\n", -10, "codam", 1, "coding together");
	printf("We are %*s students and we love %.*s\n", -10, "codam", 1, "coding together");
*/
/*
	printf("|%.s|\n", NULL);
	ft_printf("|%.s|\n", NULL);
*/	
/*
	ft_printf("I am a %c%c%c%c%c student\n", 'c', 'o', 'd', 'a', 'm');//78
	write(1, "\n", 1);
	ft_printf("I am a %10c%c%-10c%c%*c student\n", 'c', 'o', 'd', 'a', 40, 'm');//79

	ft_printf("|%c%c%c|\n", 'a', 'a', 'a');
	printf("|%c%c%c|\n", 'a', 'a', 'a');
*/
/*
	ft_printf("|%0*.*d|\n", 3, -2, -12);
	printf("|%0*.*d|\n", 3, -2, -12);
*/
/*
	ft_printf("|%-5.0d|\n", 0);
	printf("|%-5.0d|\n", 0);

	i = ft_printf("|%6.0d|\n", 0);
	f = printf("|%6.0d|\n", 0);

	i = ft_printf("|%7.5d|\n", -123);
	f = printf("|%7.5d|\n", -123);

	i = ft_printf("|%-7.2d|\n", -123);
	f = printf("|%-7.2d|\n", -123);

	i = ft_printf("|%4.3d|\n", -12345);
	f = printf("|%4.3d|\n", -12345);
	printf("\nfake:%d\nreal:%d\n", i, f);
*/
/*
	write(1, "\n", 1);
	i = ft_printf("|%-7.5d|\n", 123);
	f = printf("|%-7.5d|\n", 123);
*/
// POINTERS
/*
	i = ft_printf("|%.1x|", 16);
	write(1, "\n", 1);
	f = printf("|%.1x|", 16);
*/
/*
	i = ft_printf("|%020p|", &buf);
	write(1, "\n", 1);
	f = printf("|%020p|", &buf);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%0.20p|", &buf);
	write(1, "\n", 1);
	f = printf("|%0.20p|", &buf);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);


	i = ft_printf("|%04.20p|", &buf);
	write(1, "\n", 1);
	f = printf("|%04.20p|", &buf);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%020.4p|", &buf);
	write(1, "\n", 1);
	f = printf("|%020.4p|", &buf);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%p|", &buf);
	write(1, "\n", 1);
	f = printf("|%p|", &buf);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%p|", 0);
	write(1, "\n", 1);
	f = printf("|%p|", 0);
	printf("\nfake:%d\nreal:%d\n", i, f);
*/
// STRING
/*
	char	*str;

	str = 0;

	i = ft_printf("|%20.4s|", str);
	write(1, "\n", 1);
	f = printf("|%20.4s|", str);
	printf("\nfake:%d\nreal:%d\n", i, f);

	for (int x = 1; x <= 30; x++)
	{
		i = ft_printf("|%020s|", str);
		write(1, "\n", 1);
		f = printf("|%020s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);
		
		write(1, "\n", 1);

		i = ft_printf("|%-20s|", str);
		write(1, "\n", 1);
		f = printf("|%-20s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%-20.4s|", str);
		write(1, "\n", 1);
		f = printf("|%-20.4s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%-20s|", str);
		write(1, "\n", 1);
		f = printf("|%-20s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%-020s|", str);
		write(1, "\n", 1);
		f = printf("|%-020s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%.20s|", str);
		write(1, "\n", 1);
		f = printf("|%.20s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%-.20s|", str);
		write(1, "\n", 1);
		f = printf("|%-.20s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%4.20s|", str);
		write(1, "\n", 1);
		f = printf("|%4.20s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%20.4s|", str);
		write(1, "\n", 1);
		f = printf("|%20.4s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%s|", str);
		write(1, "\n", 1);
		f = printf("|%s|", str);
		printf("\nfake:%d\nreal:%d\n", i, f);

		write(1, "\n", 1);

		i = ft_printf("|%20s|", str);
		write(1, "\n", 1);
		f = printf("|%20s|", str);

		if (str != 0)
			free(str);
		str = ft_calloc(x + 1, 1);
		ft_memset((void*)str, 'Z', x);
		printf("\n\n---------------------------------------------------\n%d\n\n", x);
	}
free(str);
*/
// INTEGER
/*
	i = ft_printf("|%-20d|", 12);
	write(1, "\n", 1);
	f = printf("|%-20d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-020d|", 12);
	write(1, "\n", 1);
	f = printf("|%-020d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%.20d|", 12);
	write(1, "\n", 1);
	f = printf("|%.20d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-.20d|", 12);
	write(1, "\n", 1);
	f = printf("|%0-.20d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%4.20d|", 12);
	write(1, "\n", 1);
	f = printf("|%4.20d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%20.4d|", 12);
	write(1, "\n", 1);
	f = printf("|%20.4d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%04.20d|", 12);
	write(1, "\n", 1);
	f = printf("|%04.20d|", 12);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%020.4d|", 12);
	write(1, "\n", 1);
	f = printf("|%020.4d|", 12);
*/
/*
for (int x = 1; x < 10000000 ; x *= 10)
{
	i = ft_printf("|%-20d|", x);
	write(1, "\n", 1);
	f = printf("|%-20d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-020d|", x);
	write(1, "\n", 1);
	f = printf("|%-020d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%.20d|", x);
	write(1, "\n", 1);
	f = printf("|%.20d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-.20d|", x);
	write(1, "\n", 1);
	f = printf("|%0-.20d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%4.20d|", x);
	write(1, "\n", 1);
	f = printf("|%4.20d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%20.4d|", x);
	write(1, "\n", 1);
	f = printf("|%20.4d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%04.20d|", x);
	write(1, "\n", 1);
	f = printf("|%04.20d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%020.4d|", x);
	write(1, "\n", 1);
	f = printf("|%020.4d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%020.4d|", x);
	write(1, "\n", 1);
	f = printf("|%020.4d|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	printf("\n-------------------------\n\n");
}
*/
// HEX
/*
	i = ft_printf("|%020x|", -230);
	write(1, "\n", 1);
	f = printf("|%020x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);
	
	write(1, "\n", 1);

	i = ft_printf("|%-20x|", -230);
	write(1, "\n", 1);
	f = printf("|%-20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%-20.4x|", -230);
	write(1, "\n", 1);
	f = printf("|%-20.4x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%-20x|", -230);
	write(1, "\n", 1);
	f = printf("|%-20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%-020x|", -230);
	write(1, "\n", 1);
	f = printf("|%-020x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%.20x|", -230);
	write(1, "\n", 1);
	f = printf("|%.20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%0-.20x|", -230);
	write(1, "\n", 1);
	f = printf("|%0-.20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%4.20x|", -230);
	write(1, "\n", 1);
	f = printf("|%4.20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%20.4x|", -230);
	write(1, "\n", 1);
	f = printf("|%20.4x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%04.20x|", -230);
	write(1, "\n", 1);
	f = printf("|%04.20x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);

	write(1, "\n", 1);

	i = ft_printf("|%020.4x|", -230);
	write(1, "\n", 1);
	f = printf("|%020.4x|", -230);
	printf("\nfake:%d\nreal:%d\n", i, f);
*/
/*
for (int x = 1; x < 10000000 ; x *= 10)
{
	i = ft_printf("|%-20u|", x);
	write(1, "\n", 1);
	f = printf("|%-20u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-020u|", x);
	write(1, "\n", 1);
	f = printf("|%-020u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%.20u|", x);
	write(1, "\n", 1);
	f = printf("|%.20u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%-.20u|", x);
	write(1, "\n", 1);
	f = printf("|%0-.20u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%4.20u|", x);
	write(1, "\n", 1);
	f = printf("|%4.20u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%20.4u|", x);
	write(1, "\n", 1);
	f = printf("|%20.4u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%04.20u|", x);
	write(1, "\n", 1);
	f = printf("|%04.20u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%020.4u|", x);
	write(1, "\n", 1);
	f = printf("|%020.4u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%020.4u|", x);
	write(1, "\n", 1);
	f = printf("|%020.4u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);

	i = ft_printf("|%u|", x);
	write(1, "\n", 1);
	f = printf("|%u|", x);
	printf("\nfake:%d\nreal:%d\n", i, f);


	printf("\n-------------------------\n\n");
}
*/
	return (0);
}
