/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:29:55 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/07 22:40:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strcatall(int size, char *str, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		if (i != size - 1)
		{
			l = 0;
			while (sep[l])
				str[k++] = sep[l++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_tablen(char **strs, int size)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			res++;
		}
		j = 0;
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tabfinalsize;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	tabfinalsize = ft_tablen(strs, size) + (ft_strlen(sep) * (size - 1));
	str = malloc(sizeof(char) * (tabfinalsize + 1));
	str = ft_strcatall(size, str, strs, sep);
	return (str);
}
