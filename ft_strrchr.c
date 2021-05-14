#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	char	*r;
	size_t	i;

	r = (char *)s;
	while (*r)
	{
		r++;
		i++;
	}
	r--;
	while (i > 0)
	{
		if (*r == c)
			return (r);
		r--;
		i--;
	}
	return (NULL);
}