/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:46:33 by framador          #+#    #+#             */
/*   Updated: 2023/10/14 20:24:05 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*root;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	root = newlst;
	lst = lst->next;
	while (lst != NULL)
	{
		newlst->next = ft_lstnew(f(lst->content));
		if (!newlst->next)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		newlst = newlst->next;
		lst = lst->next;
	}
	return (root);
}
