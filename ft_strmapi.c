#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	r = (char *)malloc(sizeof(s) + 1);
	i = 0;
	if (!s[i])
		return(NULL);
	while (!s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = 0;
	return(r);
}