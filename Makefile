# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jhille <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/28 16:52:21 by jhille        #+#    #+#                  #
#    Updated: 2021/02/21 21:49:47 by jhille        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER_FILE = ft_printf.h
FILES = ft_printf.c\
	ft_sets.c\
	ft_hex.c\
	ft_int.c\
	ft_varcheck.c\
	printf_utils.c\
	return_check.c\
	varcheck_states.c
CFLAGS = -Wextra -Wall -Werror
OFILES = $(FILES:.c=.o)
AFILES = $(OFILES) libft/libft.a

all: $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(FILES)
	make -C libft
	ar -x libft/libft.a
	ar -cr $(NAME) *.o
clean:
	rm -f *.o
	make clean -C libft
fclean: clean
	rm -f libftprintf.a
	make fclean -C libft
re: fclean all
.PHONY: libft all clean fclean re
