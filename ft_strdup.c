/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:12:10 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:36:30 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
/*
int	main(void)
{
	char s[] = "Xico Batata so frango e arroz";

	printf("%s\n", ft_strdup(s));
	return 0;
}*/
