#include "libft.h"

int		power (int n, int p)
{
	int		r;

	r = 1;
	while (p > 0)
	{
		r *= n;
		p--;
	}
	return(r);
}

int		ft_atoi(const char *nptr)
{
	int		res;
	int		sign;
	int		digit_ctr;
	int		i;

	res = 0;
	digit_ctr = 0;
	sign = 1;
	i = 0;
	
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		i++;
		digit_ctr++;
	}
	i -= digit_ctr;
	while (digit_ctr > 0)
	{
		res += power(10, digit_ctr - 1) * (nptr[i] - 48);
		digit_ctr--;
		i++;
	}
	return(res * sign);
}