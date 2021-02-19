/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   return_check.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 20:14:40 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/14 17:22:53 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	return_check(const char *format, int i, int pos, va_list args)
{
	int	ret;

	ret = 0;
	if (i == -1)
		return (-1);
	if (format[pos] != '\0')
		ret = ft_vfprintf(1, format + pos, args);
	if (ret == -1)
		return (-1);
	else
		return (i + ret);
}
