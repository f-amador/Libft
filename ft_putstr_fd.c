/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:30:25 by framador          #+#    #+#             */
/*   Updated: 2023/10/15 14:26:31 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
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

    ft_putstr_fd(text, fd);

    close(fd); 
    // Close the file descriptor when done

    return 0;
}*/
