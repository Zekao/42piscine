/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 23:10:15 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/06 12:30:21 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbrofiteration;
	int	puissance;

	puissance = nb;
	nbrofiteration = power;
	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (nbrofiteration > 1)
	{
		nb = nb * puissance;
		nbrofiteration--;
	}
	return (nb);
}
