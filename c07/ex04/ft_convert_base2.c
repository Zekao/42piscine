/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:47:29 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/20 22:20:36 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int		i;
	int		check_duplicate;

	i = 0;
	check_duplicate = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		check_duplicate = i + 1;
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		while (base[check_duplicate])
		{
			if (base[i] == base[check_duplicate])
				return (0);
			check_duplicate++;
		}
		i++;
	}
	return (1);
}

int	ft_check_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int					i;
	unsigned int		res;
	int					get_sign;

	get_sign = 1;
	res = 0;
	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			get_sign *= -1;
		i++;
	}
	while (str[i] && ft_check_in_base(str[i], base) == 1)
	{
		res = res * ft_strlen(base) + ft_get_in_base(str[i], base);
		i++;
	}
	return (get_sign * res);
}
