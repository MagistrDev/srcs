#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*((char**)ap));
		*((char**)ap) = NULL;
	}
}