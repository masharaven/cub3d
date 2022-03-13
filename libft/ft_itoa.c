#include "libft.h"

static void	doop(int nb, char *arr)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		while (nb != 0)
		{
			arr[i] = (nb % 10) * (-1) + '0';
			nb = nb / 10;
			i++;
		}
		arr[i] = '-';
	}
	else if (nb > 0)
	{
		while (nb != 0)
		{
			arr[i] = nb % 10 + '0';
			nb = nb / 10;
			i++;
		}
	}
}

char	*ft_itoa(int n)
{
	char	arr[12];
	char	*res;
	int		i;
	int		j;

	j = 0;
	ft_bzero(arr, 12);
	if (n == 0)
		arr[0] = '0';
	doop(n, arr);
	i = 0;
	while (arr[i] != '\0')
		i++;
	res = ft_calloc(i + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	i--;
	while (i >= 0)
	{
		res[j] = arr[i];
		i--;
		j++;
	}
	return (res);
}
