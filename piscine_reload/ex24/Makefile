# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btyree <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 18:01:07 by btyree            #+#    #+#              #
#    Updated: 2019/09/03 18:04:51 by btyree           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/*.h
SRCO = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o
NAME = libft.a

all: $(NAME)

$(NAME): 
	gcc -c $(SRC) $(HEADER)
	ar rc $(NAME) $(SRCO)

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
