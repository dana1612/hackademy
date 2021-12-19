#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

unsigned int my_strlen(const char *str)
{
	unsigned int count = 0;
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	
	return count;
}