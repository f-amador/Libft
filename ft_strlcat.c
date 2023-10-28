/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:39:54 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:28:31 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	i;
	size_t	sl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	i = 0;
	if (size <= dl)
		return (sl + size);
	while (size - dl - 1 > i && src[i])
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = 0;
	return (sl + dl);
}
