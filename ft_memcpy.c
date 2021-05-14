#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*r;
	char	*p;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	while (i < n)
	{
		r[i] = p[i];
		i++;
	}
	return(r);
}