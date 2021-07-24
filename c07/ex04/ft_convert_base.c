/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:46:52 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/20 22:27:22 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_nbrlen(long n, char *base)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= ft_strlen(base))
	{
		n /= ft_strlen(base);
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base, char *res, int i)
{
	int		len_base;
	long	n;

	n = nbr;
	len_base = ft_strlen(base);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if (n < len_base)
		res[i] = base[n];
	else
	{
		ft_putnbr_base(n / len_base, base, res, i - 1);
		ft_putnbr_base(n % len_base, base, res, i);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		n;

	if (!nbr || !ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(char) * (ft_nbrlen(n, base_to) + 1));
	ft_putnbr_base(n, base_to, res, ft_nbrlen(n, base_to));
	res[(ft_nbrlen(n, base_to) + 1)] = '\0';
	return (res);
}
