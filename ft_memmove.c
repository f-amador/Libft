/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:57:48 by framador          #+#    #+#             */
/*   Updated: 2023/10/05 18:54:03 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		s += n;
		d += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return (dest);
}
