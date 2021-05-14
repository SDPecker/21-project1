#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		finish;
	char	*r;

	i = 0;
	start = 0;
	finish = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strchr(set, s1[finish]) != NULL)
		finish--;
	r = (char *)malloc(finish - start + 1);
	if (start >= finish)
		return (NULL);
	while (start <= finish)
		r[i++] = s1[start++];
	r[i] = 0;
	return (r);
}