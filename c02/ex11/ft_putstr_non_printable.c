/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:42 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/04 12:53:58 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hexa;
	unsigned char	c;

	hexa = "0123456789abcdef";
	while (str[i])
	{
		c = (unsigned char) str[i];
		if (c >= 32 && c <= 126)
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[c / 16]);
			ft_putchar(hexa[c % 16]);
		}
		i++;
	}
}
