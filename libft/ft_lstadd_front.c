#include "libft.h"

/**
 * @brief
 * 
 * @param lst 
 * @param new 
 */

void	ft_lstadd_front(t_list **lst, t_list *new1)
{
	if (!lst || !new1)
		return ;
	new1->next = *lst;
	*lst = new1;
}
