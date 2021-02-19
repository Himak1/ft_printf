/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:28:23 by jhille        #+#    #+#                 */
/*   Updated: 2021/02/17 20:07:13 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"
# define CONVS "cspdiuxX%"
# define FLAGS "-0"

typedef struct	varlist
{
	int			flags;
	int			width;
	int			prec;
	char		conv;
}				c_lst;

int		ft_printf(const char *format, ...);
int		ft_vfprintf(int fd, const char *format, va_list args);
int		printlen(const char *str, int i, va_list args, c_lst *list);
int		return_check(const char *format, int i, int pos, va_list args);

void	strctzero(c_lst *ptr, char **store);

char	*width_correct(char *ret, char c, int olen, int nlen);
char	*ft_strrealloc(char *ptr, size_t newsize);

int		varcheck(const char *str, int len, va_list args, c_lst *lst);
int		get_width_prec(const char *format, int startnum, int endnum);
int		struct_set(const char *str, int *parameter, int *len);
void		arg_set(const char *str, int *strct_int, int *len, va_list args);
void		flag_set(const char *str, int *len, c_lst *lst);

char	*varjoin(c_lst *lst, va_list args);

char	*char_set(c_lst *lst, va_list args);
char	*str_set(c_lst *lst, va_list args);
char	*ptr_set(c_lst *lst, va_list args);
char	*int_set(c_lst *lst, va_list args);
char	*hexstr_set(c_lst *lst, va_list args);
char	*percent_set(char c, c_lst *lst);
char	*uint_set(c_lst *lst, va_list args);

char	*hex_set(long long convert, int letcase);
#endif
