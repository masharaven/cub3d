/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccade <ccade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:02:48 by ccade             #+#    #+#             */
/*   Updated: 2022/03/13 17:02:49 by ccade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new1)
{
	t_list	*last_el;

	if (*lst == NULL)
	{
		*lst = new1;
	}
	else
	{
		last_el = ft_lstlast(*lst);
		last_el->next = new1;
	}
}
