/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:59:49 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:31:50 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	if (!n)
		return (NULL);
	while (i < n - 1 && tmp[i] != (unsigned char)c)
		i++;
	if (tmp[i] == (unsigned char)c)
		return (tmp + i);
	return (NULL);
}
