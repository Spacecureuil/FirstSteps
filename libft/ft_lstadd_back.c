
#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	t_list	*last_elem;

	if (!*last)
	{
		*last = new;
		return ;
	}
	last_elem = ft_lstlast(*last);
	last_elem->next = new;
}