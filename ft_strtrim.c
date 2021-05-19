#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	size_t	len;
	char	*r;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (ft_strchr(set, *start) != NULL && *start)
		start++;
	len = ft_strlen(start);
	while (ft_strchr(set, start[len]) && len)
		len--;
	r = ft_substr(start, 0, len + 1);
	return (r);
}
