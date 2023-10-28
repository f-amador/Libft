/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:38:40 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:26:27 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size * sizeof(void));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}
/*
int	main(void)
{
	if (calloc(0,0) == NULL)
		printf("Francinette aint shit!");
	else
		printf("Get humbled son!!");
	return (0);
}*/
