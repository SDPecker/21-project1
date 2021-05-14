#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p;
	char	*r;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	
	if (r < p)
		while (len > 0)
		{
			r[len - 1] = p[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			r[i] = p[i];
			i++;
		}
	return (dst);
}