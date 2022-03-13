
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		c;
	char	*news;

	i = 0;
	if (s == NULL)
		return (NULL);
	c = ft_strlen((char *)s);
	news = ft_calloc(c + 1, sizeof(char));
	if (news == NULL)
		return (NULL);
	while (s[i])
	{
		((char *)news)[i] = (*f)(i, s[i]);
		i++;
	}
	return (news);
}
