# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 15:20:00 by nmumbwe           #+#    #+#              #
#    Updated: 2018/08/05 08:07:48 by nmumbwe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCL = ./incl/ft_printf.h ./incl/libft/libft.h

SRCS = ./incl/libft/*.c ./printf_srcs/*.c

OBJS = ./*.o

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	gcc -c -Wall -Wextra -Werror $(SRCS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(OBJS) $(NAME)

re : fclean all
