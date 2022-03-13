#include "libft.h"

static void	go_nbr(long nb, char a, char *arr, int fd)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	while (nb != 0)
	{
		a = nb % 10 + '0';
		nb = nb / 10;
		arr[i] = a;
		i++;
	}
	arr[i] = '\0';
}

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[11];
	char	a;
	int		i;

	i = 0;
	a = '\0';
	go_nbr((long)n, a, arr, fd);
	while (arr[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(fd, &arr[i], 1);
		i--;
	}
}
