#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*s;

	if (size + 1 < size)
		return (NULL);
	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	else
	{
		s = mem;
		while (size-- + 1)
			*(mem++) = 0;
	}
	return (s);
}