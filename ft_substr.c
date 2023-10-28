/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:52:04 by framador          #+#    #+#             */
/*   Updated: 2023/10/11 15:03:40 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start > ft_strlen(s))
	{
		len = 0;
		start = ft_strlen(s);
	}
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/*
int	main(void)
{
	char	str[] = "";
	char	*s;
	s = ft_substr("hola", 4294967295, 0);
	printf("%s\n", s);
	free(s);
}*/
