#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char* ft_strstr(char *str1, char *str2)
{
    int i, j;
	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] == str1[i + j])
		{
			if (str2[j + 1] == '\0')
			{
				return (str1 + i);
			}
			j++;
		}
		i++;
	}
	return NULL;
}