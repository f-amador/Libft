/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:09:29 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:27:39 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*add;

	add = (char *)s;
	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
		i--;
	if ((char)c == s[i])
		return (add + i);
	return (NULL);
}
