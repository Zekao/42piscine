/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:00:32 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/19 18:04:05 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nbr);

int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	negativeorpos;

	i = 0;
	negativeorpos = 0;
	while (str[i] < '0')
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
	{
		r = r * -1;
	}
	return (r);
}

int	result_return(char **argv)
{
	int	r;

	r = 0;
	if (argv[2][0] == '*')
		r = ft_atoi(argv[1]) * ft_atoi(argv[3]);
	else if (argv[2][0] == '+')
		r = ft_atoi(argv[1]) + ft_atoi(argv[3]);
	else if (argv[2][0] == '-')
		r = ft_atoi(argv[1]) - ft_atoi(argv[3]);
	else if (argv[2][0] == '/' && argv[3][0] != '0')
		r = ft_atoi(argv[1]) / ft_atoi(argv[3]);
	else if (argv[2][0] == '%' && argv[3][0] != '0')
		r = ft_atoi(argv[1]) % ft_atoi(argv[3]);
	if (argv[2][1] != '\0')
		return (0);
	return (r);
}

int	main(int argc, char **argv)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	if (argc == 4)
	{
		i = result_return(argv);
		{
			if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
			{
				if (argv[2][0] == '%')
					write(1, "Stop : modulo by zero\n", 22);
				else if (argv[2][0] == '/')
					write(1, "Stop: division by zero\n", 23);
				return (0);
			}
		}
		ft_putnbr(i);
		write(1, "\n", 1);
	}
	return (0);
}
