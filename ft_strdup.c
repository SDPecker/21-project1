#include "libft.h"

void	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
