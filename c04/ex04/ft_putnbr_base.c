/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:37:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/05 21:38:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_convertbase(char *base)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		y = i + 1;
		while (base[y])
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		a;
	unsigned int		new_nbr;

	a = ft_convertbase(base);
	if (a == 0 || a == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		new_nbr = (unsigned int)(nbr * -1);
	}
	else
		new_nbr = (unsigned int) nbr;
	if (new_nbr >= a)
		ft_putnbr_base(new_nbr / a, base);
	ft_putchar(base[new_nbr % a]);
}
