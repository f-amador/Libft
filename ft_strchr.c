/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:03:46 by framador          #+#    #+#             */
/*   Updated: 2023/10/15 15:02:39 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*add;

	add = (char *)s;
	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if ((char)c == s[i])
		return (add + i);
	return (NULL);
}
