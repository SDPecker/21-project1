#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	char	*r;
	size_t	i;

	i = 0;
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
