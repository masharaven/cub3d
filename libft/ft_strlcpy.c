#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	if ((!dest) && (!src))
		return (0);
	if (size > 0)
	{
		while ((i < (int)size - 1) && (src[i]))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
