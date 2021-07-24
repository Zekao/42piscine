/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 21:41:02 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/20 18:50:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	negativeorpos;

	i = 0;
	negativeorpos = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negativeorpos++;
		i++;
	}
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	if (negativeorpos % 2 == 1)
		r = r * -1;
	return (r);
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
		y = i + i;
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	baselen;

	r = 0;
	baselen = ft_convertbase(base);
	i = 0;
	while (str[i])
	{
		r = r * baselen + str[i]
	}

}
