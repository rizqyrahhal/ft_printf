# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:37:32 by rarahhal          #+#    #+#              #
#    Updated: 2021/12/01 19:38:31 by rarahhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = ft_printf.c \
		
	   
	   
	   
	   
	   
	   
	   
	   
OBJS = $(SRCS:.c=.o)


$(NAME): $(OBJS)
		$(CC) $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

all:	$(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) test

re: fclean
	make all

test: $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	gcc $(NAME) main.c -o test
	rm -rf $(OBJS)

.PHONY: all clean fclean re test