/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccade <ccade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:04:01 by ccade             #+#    #+#             */
/*   Updated: 2022/03/13 17:04:02 by ccade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_el;
	t_list	*head;

	if (!lst)
		return (NULL);
	new_el = ft_lstnew(f(lst->content));
	if (!new_el)
		return (NULL);
	head = new_el;
	while (lst->next)
	{
		lst = lst->next;
		new_el->next = ft_lstnew(f(lst->content));
		if (new_el->next == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_el = new_el->next;
	}
	return (head);
}
