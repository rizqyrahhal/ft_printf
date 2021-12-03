# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 19:37:32 by rarahhal          #+#    #+#              #
#    Updated: 2021/12/03 07:15:46 by RizQy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = sources/ft_printf.c \
		sources/ft_printstr.c \
		
		
	   
	   
	   
	   
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
test_fg: 
	@gcc $(FLAGS) $(SRCS) main.c -o teat_fg
	@./teat_fg
	

.PHONY: all clean fclean re test