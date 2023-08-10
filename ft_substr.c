#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (s[i] && start < s_len && i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
