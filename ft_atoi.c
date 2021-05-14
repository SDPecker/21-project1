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

int	det_sign(const char *s)
{
	int		i;
	int		r;

	i = 0;
	r = 1;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			r *= (-1);
		i++;
	}
	return (r);
}

int	skip(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == '+' || s[i] == '-')
		i++;
	return (i);
}

int	count_digits(const char *s, int pos)
{
	int	i;
	int	r;

	i = pos;
	r = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		i++;
		r++;
	}
	return (r);
}

int	ft_atoi(const char *nptr)
{
	int		res;
	int		sign;
	int		digit_ctr;
	int		i;

	res = 0;
	sign = det_sign(nptr);
	i = skip(nptr);
	digit_ctr = count_digits(nptr, i);
	while (digit_ctr > 0)
	{
		res += power(10, digit_ctr - 1) * (nptr[i] - 48);
		digit_ctr--;
		i++;
	}
	return (res * sign);
}
