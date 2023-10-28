/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:49:30 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:28:00 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
		tmp[i++] = (unsigned char)c;
	return (s);
}
/*
int	main()
{
	void *p;
	void *b;

	p = malloc(5);
	b = malloc(5);
	if (!p || !b)
		return (1);
	p = memset(p, 5, 4);
	b = ft_memset(b, 5, 4);
	printf("%d\n", memcmp(p, b, 4));
	free(b);
	free(p);
	return (0);
}*/
