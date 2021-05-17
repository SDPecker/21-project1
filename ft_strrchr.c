#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	size_t	i;
	char	*r;

	r = (char *)s;
	if (!c)
		return (&r[ft_strlen(r)]);
	i = ft_strlen(s);
	if (!i)
		return (NULL);
	while (i > 0)
	{
		i--;
		if (r[i] == c)
			return (&r[i]);
	}
	return (NULL);
}
