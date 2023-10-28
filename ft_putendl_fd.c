/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:00:11 by framador          #+#    #+#             */
/*   Updated: 2023/10/15 14:27:35 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	ft_putchar_fd(10, fd);
}
/*
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

    ft_putendl_fd(text, fd);

    close(fd);
    // Close the file descriptor when done

    return 0;
}
*/
