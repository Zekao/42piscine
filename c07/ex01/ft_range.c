/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:14:52 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/07 22:40:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	j;
	int	i;

	j = min;
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
