#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

void ft_bzero(void * s , size_t  n )
{
	unsigned char* p = (unsigned char*)s;
	unsigned char val = 0;
    while(n--)
    {
        *p++ = val;
    }
}