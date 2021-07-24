# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 17:36:33 by emaugale          #+#    #+#              #
#    Updated: 2021/07/19 13:28:36 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = do-op.c ft_putnbr.c ft_putstr.c

OBJS = ${SRCS:.c=.o}

NAME = do-op

CC = gcc

RM = rm -f

CFLAGS =  -Wall -Wextra -Werror


all: ${NAME}


${NAME} : ${OBJS}
	${CC} ${CFLAGS} -o $@ $^

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
