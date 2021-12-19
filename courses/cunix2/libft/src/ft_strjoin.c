#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char* ft_strjoin (char const *s1, char const *s2)
{
	int len = my_strlen(s1) + my_strlen(s2) + 1;	
	char *str = (char*) malloc(len); 	
	if(str == NULL)
	{	
		return NULL;
	}
	for(int i = 0; i < my_strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	int j = 0;
	for(int i = my_strlen(s1); i < len - 1; i++, j++)
	{
		str[i] = s2[j];
	}
	str[len - 1] = '\0';
	return str;
}