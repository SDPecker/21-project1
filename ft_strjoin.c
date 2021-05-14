#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*r;

	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (s1[j])
			r[i++] = s1[j++];
		j = 0;
		while (s2[j])
			r[i++] = s2[j++];
	}
	return (r);	
}