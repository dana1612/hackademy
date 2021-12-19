#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

void* ft_memset( void * memptr, int val, size_t num )
{
    unsigned char* p = (unsigned char*)memptr;
    while(num--)
    {
        *p++ = (unsigned char)val;
    }
    return memptr;
}