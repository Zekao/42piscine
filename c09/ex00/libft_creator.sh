# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 17:40:44 by emaugale          #+#    #+#              #
#    Updated: 2021/07/12 17:40:46 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c
ar rc libft.a ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o
