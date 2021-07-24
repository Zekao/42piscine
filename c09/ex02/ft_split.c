/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:43:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/16 13:44:00 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
		if (ft_is_charset(str[i], charset) == 0 && str[i])
		{	
			while (ft_is_charset(str[i], charset) == 0 && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

char	*ft_strndup(char *str, int size)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = malloc(sizeof(char) * (size + 1));
	while (str[i] && i < size)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	**merci_la_norme(char **finalstr)
{
	finalstr[0] = 0;
	return (finalstr);
}

char	**ft_split(char *str)
{
	char *charset; 
	char	**finalstr;
	int		i;
	int		j;
	int		size;

	charset = "\n\t\r\v ";
	i = 0;
	j = 0;
	size = ft_is_word(str, charset);
	finalstr = malloc(sizeof(char *) * (ft_is_word(str, charset) + 1));
	if (ft_is_word(str, charset) == 0)
		return (merci_la_norme(finalstr));
	while (j < size)
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
		str = str + i;
		i = 0;
		while (ft_is_charset(str[i], charset) == 0 && str[i])
			i++;
		finalstr[j++] = ft_strndup(str, i);
		str = str + i;
		i = 0;
	}
	finalstr[j] = 0;
	return (finalstr);
}
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	char **str;
	i = 0;

	str = ft_split("salut\na\ttous\vje\rjsuis split                 ouais\n                    non");
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
