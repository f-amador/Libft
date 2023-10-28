/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:16:55 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:37:01 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sig;
	int	i;

	res = 0;
	sig = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sig += 1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sig)
			res = res * 10 - (nptr[i] - '0');
		else
			res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res);
}
