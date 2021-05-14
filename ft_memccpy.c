#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	*r;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	while (i < n && p[i])
	{
		*r = p[i];
		i++;
		if (*r == c)
		{
			r++;
			return(r);
		}
		r++;
	}
	return (NULL);
}