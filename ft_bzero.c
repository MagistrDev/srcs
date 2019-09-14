#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*mem;

	mem = (unsigned char *)s;
	while (n--)
		*(mem + n) = 0;
}