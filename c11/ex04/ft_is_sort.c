/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:11:22 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/19 17:44:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sorted;
	int	equals;

	i = 0;
	sorted = 0;
	equals = 0;
	if (length == 0)
		return (1);
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			sorted++;
		else if ((*f)(tab[i], tab[i + 1]) == 0)
			equals++;
		else
			sorted--;
		i++;
	}
	if (sorted < 0)
		sorted *= -1;
	if (sorted + equals == (length - 1))
		return (1);
	return (0);
}
