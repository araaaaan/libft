#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(count * size);
	if (tmp == 0)
		return (NULL);
	memset (tmp, 0, size * count);
	return (tmp);
}
