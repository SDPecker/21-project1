#include "libft.h"

int		count_digits(int n)
{
	int		i;

	i = 1;
	while(n / power(10, i) > 0)
		i++;
	return(i);
}

char	*ft_itoa(int n)
{
	int		d;
	int		i;
	char	*r;

	d = count_digits(n);
	i = 0;
	r = (char *)malloc(d + 1);
	while(i < d)
	{
		r[i] = n / power(10, d - i - 1) % 10 + 48;
		i++;
	}
	return(r);
}