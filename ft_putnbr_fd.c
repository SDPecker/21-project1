#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	t;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		t = (unsigned int)(-1 * n);
	}
	else
		t = (unsigned int)n;
	if (t >= 10)
		ft_putnbr_fd(t / 10, fd);
	ft_putchar_fd((char)(t % 10 + 48), fd);
}
