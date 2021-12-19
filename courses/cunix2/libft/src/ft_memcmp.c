#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

int ft_memcmp(const void * memptr1, const void * memptr2, size_t num)
{
    if(num == 0)
        return 0;
    while(--num && *(char*)memptr1 == *(char*)memptr2 ) {
        memptr1 = (char*)memptr1 + 1;
        memptr2 = (char*)memptr2 + 1;
    }
    return(*((unsigned char*)memptr1) - *((unsigned char*)memptr2));
}
