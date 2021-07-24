/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:58:04 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/14 13:47:23 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*finaltab;

	i = 0;
	finaltab = malloc(sizeof(int) * length);
	while (i < length)
	{
		finaltab[i] = (*f)(tab[i]);
		i++;
	}
	return (finaltab);
}
