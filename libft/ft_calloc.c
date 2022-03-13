#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;

	cal = (void *)malloc(count * size);
	if (cal == NULL)
		return (NULL);
	ft_bzero(cal, count * size);
	return (cal);
}
