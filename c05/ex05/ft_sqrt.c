/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:09:07 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/19 15:18:53 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;
	int	nbr;

	nbr = 1;
	res = 0;
	while (nb <= 46340 && res < nb)
	{
		res = nbr * nbr;
		if (nbr * nbr == nb)
			return (nbr);
		nbr ++;
	}
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}
