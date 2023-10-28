/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:41:57 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 17:33:28 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
    // Test cases
    char src1[] = "Hello, World!";
    char src2[] = "This is a test.";
    char src3[] = "12345";
    char src4[] = "Short";
    
    char dest1[20];
    char dest2[20];
    char dest3[20];
    char dest4[20];

    // Test 1: Copy a longer string
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    printf("Test 1: my_memcpy result: %s\n", dest1);

    memcpy(dest2, src1, strlen(src1) + 1);
    printf("Test 1: memcpy result: %s\n", dest2);

    // Test 2: Copy a shorter string
    ft_memcpy(dest3, src3, strlen(src3) + 1);
    printf("Test 2: my_memcpy result: %s\n", dest3);

    memcpy(dest4, src3, strlen(src3) + 1);
    printf("Test 2: memcpy result: %s\n", dest4);

    // Test 3: Copy to a smaller destination buffer
    ft_memcpy(dest1, src2, 5);
    printf("Test 3: my_memcpy result: %s\n", dest1);

    memcpy(dest2, src2, 5);
    printf("Test 3: memcpy result: %s\n", dest2);

    // Test 4: NULL source pointer
    char dest5[20];
    //ft_memcpy(dest5, NULL, 10);
    printf("Test 4: my_memcpy with NULL src result: %s\n", dest5);
	int main() {

    char dest6[20];
    memcpy(dest6, NULL, 10);
    printf("Test 4: memcpy with NULL src result: %s\n", dest6);

    return 0;
}
*/
