#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	r = (char *)malloc(len + 1);
	if (!r)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		r[i++] = s[j++];
	}
	r[i] = 0;
	return (r);
}
