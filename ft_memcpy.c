#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *mem;
	
	mem = (unsigned char *)dest;
	while (n--)
	{
		*(mem + n) = (unsigned char)*(src + n);
	}
	return(dest);
}