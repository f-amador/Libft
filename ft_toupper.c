/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:37:27 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:29:27 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	return (c - (!(c < 97 || c > 122) * ' '));
}
/*
int	main(void)
{
	char *s = "adshlf md,a ,nq , ;ja/nq ehf ";
	int i = 0;
	while (s[i])
	{
		printf("%c\n", ft_toupper(s[i]));
		i++;
	}
	printf("%s", s);
}*/
