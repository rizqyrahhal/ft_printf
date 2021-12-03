# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:37:32 by rarahhal          #+#    #+#              #
#    Updated: 2021/12/03 17:42:29 by rarahhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = ft_printf.c \
		sources/ft_print_char.c \
		sources/ft_print_str.c \
		sources/ft_print_ptr.c \
		sources/ft_print_nbr.c \
		sources/ft_print_unsigned.c \
		sources/ft_print_hexa.c \
		
		
		
	   
	   
	   
	   
OBJS = $(SRCS:.c=.o)


$(NAME): $(OBJS)
		$(CC) $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

all:	$(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) test teat_fg

re: fclean
	make all

test: $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	gcc $(NAME) main.c -o test
	rm -rf $(OBJS)
test_fg: 
	@gcc $(FLAGS) $(SRCS) main.c -o teat_fg
	@./teat_fg
	

.PHONY: all clean fclean re test