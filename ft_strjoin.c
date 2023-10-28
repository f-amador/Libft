/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:43:22 by framador          #+#    #+#             */
/*   Updated: 2023/10/12 14:45:05 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1l;

	s1l = ft_strlen(s1);
	str = (char *)malloc(((s1l + ft_strlen(s2)) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1l + 1);
	ft_strlcat(str, s2, ft_strlen(s2) + s1l + 1);
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "Hello,";
	char	s2[] = "World!";

	printf("%s\n", ft_strjoin(s1, s2));


}*/
