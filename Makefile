# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jhille <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/28 16:52:21 by jhille        #+#    #+#                  #
#    Updated: 2021/02/25 23:05:01 by jhille        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER_FILE = ft_printf.h
FILES = ft_printf.c\
	basic_sets.c\
	hex_set.c\
	int_set.c\
	ft_varcheck.c\
	printf_utils.c\
	return_check.c\
	varcheck_states.c\
	write_check.c
CFLAGS = -Wextra -Wall -Werror
OFILES = $(FILES:.c=.o)
AFILES = $(OFILES) libft/libft.a

all: $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(FILES)
	make -C libft
	cp libft/libft.a libftprintf.a
	ar -rs libftprintf.a $(OFILES)
clean:
	rm -f $(OFILES)
	make clean -C libft
fclean: clean
	rm -f libftprintf.a
	make fclean -C libft
re: fclean all
.PHONY: libft all clean fclean re
