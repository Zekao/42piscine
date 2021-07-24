/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 08:14:44 by emaugale          #+#    #+#             */
/*   Updated: 2021/06/30 10:23:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_putcomb(int comb1, int comb2)
{
	ft_putchar(comb1 / 10);
	ft_putchar(comb1 % 10);
	write(1, " ", 1);
	ft_putchar(comb2 / 10);
	ft_putchar(comb2 % 10);
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 0;
	while (comb1 <= 98)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 99)
		{
			ft_putcomb(comb1, comb2);
			if (comb1 != 98 || comb2 != 99)
			{
				write(1, ", ", 2);
			}
			comb2++;
		}
		comb1++;
	}
}
