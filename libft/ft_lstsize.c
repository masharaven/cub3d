#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*copy_lst;

	count = 0;
	copy_lst = lst;
	if (!lst)
		return (0);
	while (copy_lst != NULL)
	{
		count++;
		copy_lst = copy_lst->next;
	}
	return (count);
}
