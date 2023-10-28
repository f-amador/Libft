/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:24:17 by framador          #+#    #+#             */
/*   Updated: 2023/10/15 14:47:26 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	count;

	i = -1;
	count = (str[0] != c && str[0]);
	while (str[++i])
	{
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			count += (str[i] != '\0');
		}
	}
	return (count);
}

static int	ft_wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		wordlen;

	j = 0;
	i = 0;
	split = (char **)ft_calloc((ft_countwords(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		wordlen = ft_wordlen(s + i, c);
		split[j] = ft_substr(s + i, 0, wordlen);
		i += wordlen;
		j++;
	}
	return (split);
}
/*
int	main(void)
{
	char	**split;
	
	split = ft_split("Hello, World!", 32);
	int	i = 0;
	while (i < 2)
	{
		printf("%s\n", split[i]);
		free (split[i]);
		i++;
	}
	free(split);
}*/
