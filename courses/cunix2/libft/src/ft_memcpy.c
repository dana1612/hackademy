#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

void* ft_memcpy(void * destptr, const void * srcptr, size_t num)
{
   char *temp_srcptr = (char *)srcptr;
   char *temp_destptr = (char *)destptr;
   for (int i=0; i<num; i++)
       temp_destptr[i] = temp_srcptr[i];
   return NULL;
}