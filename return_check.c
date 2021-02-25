/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   return_check.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 20:14:40 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/21 23:29:22 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	return_check(const char **format, char **store, int *pos, int *i)
{
	if (*store == 0 || *pos == -1)
		*i = -1;
	if (*store != 0)
		ft_resetptr((void**)store);
	if (*pos != -1)
		*format = *format + *pos;
}
