/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:57:19 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 16:14:00 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(char const *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		len;
	int		i;

	start = 0;
	len = 0;
	i = 0;
	while (ft_setcheck(set, s1[i++]))
		start++;
	i = ft_strlen(s1) - 1;
	while (ft_setcheck(set, s1[i--]))
		len++;
	str = ft_substr(s1, start, ft_strlen(s1) - start - len);
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Hello, World!";
	char	set[] = "Helo, !";
	
	printf("%s\n", ft_strtrim(str, set));
}*/
