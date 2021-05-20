#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cn;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)s;
	cn = (unsigned char)c;
	while (i < n)
	{
		if (r[i] == cn)
			return (&r[i]);
		i++;
	}
	return (NULL);
}
