/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:25:01 by framador          #+#    #+#             */
/*   Updated: 2023/10/26 01:21:44 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd(45, fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int main(void)
{
    char *text = "Hello, this is a test!";
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    // Open or create "output.txt" for writing

    if (fd == -1)
    {
        perror("Error opening the file");
        return 1;
    }

    ft_putnbr_fd(-2147483648, fd);

    close(fd);
    // Close the file descriptor when done

    return 0;
}

