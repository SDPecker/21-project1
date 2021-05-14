#include "libft.h"

char	*ft_strchr(const char *s, char c)
{
	char	*r;

	r = (char *)s;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}