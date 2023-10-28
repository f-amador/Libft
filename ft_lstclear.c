/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:21:49 by framador          #+#    #+#             */
/*   Updated: 2023/10/18 13:21:51 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next = (tmp)->next;
		ft_lstdelone(tmp, del);
		tmp = next;
	}
	*lst = NULL;
}
