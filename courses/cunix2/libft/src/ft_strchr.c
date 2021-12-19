#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char* ft_strchr(char *string, unsigned int symbol )
	{
	unsigned int i = 0;
	while (string[i])
	{
		if (string[i] == (char)symbol)
			return ((char *)&string[i]);
		i++;
	}
	if ((char)symbol == string[i])
		return ((char *)&string[i]);
	return NULL;
}