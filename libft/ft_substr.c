#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subs;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	subs = ft_calloc((len + 1), sizeof(char));
	if (subs == NULL)
		return (NULL);
	while (s[i] && (i != start))
		i++;
	while ((s[i]) && (j < len))
	{
		subs[j] = s[i];
		i++;
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
