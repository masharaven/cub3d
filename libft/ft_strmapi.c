/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccade <ccade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:05:39 by ccade             #+#    #+#             */
/*   Updated: 2022/03/13 17:06:13 by ccade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
	news = (char *)ft_calloc(c + 1, sizeof(char));
	if (news == NULL)
		return (NULL);
	while (s[i])
	{
		((char *)news)[i] = (*f)(i, s[i]);
		i++;
	}
	return (news);
}
