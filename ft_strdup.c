#include "libft.h"

void	*ft_strdup(const char *s, size_t n)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(n + 1);
	i = 0;
	while (i < n && s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}