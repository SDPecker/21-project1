#include "libft.h"

int	power(int n, int p)
{
	int		r;

	r = 1;
	while (p > 0)
	{
		r *= n;
		p--;
	}
	return (r);
}

int		abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

int		count_digits(int n)
{
	int		i;
	int		t;

	i = 1;
	t = abs(n);
	while(t / power(10, i) > 0)
		i++;
	return(i);
}

char	*ft_itoa(int n)
{
	int		d;
	int		i;
	char	*r;
	int		t;

	d = count_digits(n);
	t = abs(n);
	i = 0;
	if (n < 0)
	{
		d++;
		r = (char *)malloc(d + 2);
		r[i] = '-';
		i++;
	}
	else
		r = (char *)malloc(d + 1);
	while(i < d)
	{
		r[i] = t / power(10, count_digits(t) - 1) + 48;
		t -= t / power(10, count_digits(t) - 1);
		i++;
	}
	r[i] = 0;
	return(r);
}