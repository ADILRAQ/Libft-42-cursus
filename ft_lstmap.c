/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:19:09 by araqioui          #+#    #+#             */
/*   Updated: 2022/11/03 17:24:56 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (!lst || !del || !f)
		return (0);
	head = NULL;
	while (lst)
	{
		ft_lstadd_back(&head, ft_lstnew(f(lst->content)));
		if (!head)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		del(lst->content);
		lst = lst->next;
	}
	return (head);
}
