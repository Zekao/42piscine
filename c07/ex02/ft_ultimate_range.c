/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:27:40 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/09 12:21:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	i;
	int	size;

	size = max - min;
	j = min;
	i = 1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (size));
	if (!(range))
		return (-1);
	(*range)[0] = j;
	j++;
	while (i < size)
	{
		(*range)[i] = j;
		j++;
		i++;
	}
	return (i);
}
