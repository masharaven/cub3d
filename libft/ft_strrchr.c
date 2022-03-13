#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	i;
	int	size;

	i = 0;
	count = -1;
	size = ft_strlen((char *)s);
	while (i < size + 1)
	{
		if (s[i] == (char)c)
			count = i;
		i++;
	}
	if (count == -1)
		return (NULL);
	else
	{
		i = 0;
		while (i++ < count)
			s++;
		return ((char *) s);
	}
}
