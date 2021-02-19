/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 14:08:07 by jhille        #+#    #+#                 */
/*   Updated: 2020/11/22 13:52:39 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	recurwrite(unsigned int conv, int fd)
{
	char	c;

	if ((conv / 10) != 0)
		recurwrite((conv / 10), fd);
	c = (conv % 10) + '0';
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int	conv;

	conv = n;
	if (n < 0)
	{
		conv = n * -1;
		write(fd, "-", 1);
	}
	recurwrite(conv, fd);
}
