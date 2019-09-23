#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*mem;
	char	*v;

	if (!(mem = (char*)malloc(size))
		return (NULL);
	else
	{
		v = mem;
		while (size--)
			*(mem++) = 0;
	}
	return ((void*)v);
}