#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char* ft_strnstr(const char *big, const char *little, size_t len)
{
        int i;
        size_t new_len;
        if (0 == (new_len = my_strlen(little)))
                return (char *)big;
        for (i=0; i<=(int)(len-new_len); i++)   {
                if ((big[i] == little[i]) && (0 == strncmp(big, little, new_len)))
                        return (char *)big;
                big++;
        }
        return NULL;
}