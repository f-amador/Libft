/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:37:24 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:26:16 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lencount(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_lencount(n);
	str = (char *)ft_calloc((len-- + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	char *s;
	s = ft_itoa(-2147483647);
	printf("%s\n", s);-2147483647)
	free(s);
}*/
