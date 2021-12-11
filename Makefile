# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:37:32 by rarahhal          #+#    #+#              #
#    Updated: 2021/12/11 13:41:28 by RizQy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = 	sources/ft_printf.c \
		sources/ft_print_char.c \
		sources/ft_print_str.c \
		sources/ft_print_ptr.c \
		sources/ft_print_nbr.c \
		sources/ft_print_unsigned.c \
		sources/ft_print_hexa.c \
		
		
	   
	   
	   

OBJS = $(SRCS:sources/.c=.o)


$(NAME): $(OBJS)
		$(CC) $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

all:	$(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) teat_fg

re: fclean
	make all

test: 
	@gcc $(FLAGS) $(SRCS) main.c -o teat_fg
	@./teat_fg

# test_er: $(OBJS)
# 	gcc $(FLAGS) -c $(SRCS)
# 	ar rc $(NAME) $(OBJS)
# 	gcc $(NAME) main.c -o test
# 	rm -rf $(OBJS)

.PHONY: all clean fclean re test