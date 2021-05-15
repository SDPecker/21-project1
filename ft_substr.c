#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s) - 1 || !s)
		return (NULL);
	r = (char *)malloc(len + 1);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		r[i++] = s[j++];
	}
	r[i] = 0;
	return (r);
}
