#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *) dst;
	p = (unsigned char *) src;
	while (i < n && p[i])
	{
		*r = p[i];
		i++;
		if (*r == (unsigned char)c)
		{
			r++;
			return (r);
		}
		r++;
	}
	return (NULL);
}
