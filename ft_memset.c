#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*mem;
	unsigned char	ch;

	ch = (unsigned char)c;
	mem = (unsigned char *)s;
	while (n--)
		*(mem + n) = ch;
	return (s);
}