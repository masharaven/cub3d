#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen((char *)s);
	while (i < size + 1)
	{
		if (*s == (char)c)
			return ((char *)s);
		i++;
		s++;
	}
	return (NULL);
}
