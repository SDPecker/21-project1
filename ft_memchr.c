#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*r;

	i = 0;
	r = (char *)s;
	while (i < n && *r)
	{
		if (r[i] == c)
			return (&r[i]);
		i++;
	}
	return (NULL);
}