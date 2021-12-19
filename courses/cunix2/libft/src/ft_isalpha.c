#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

int ft_isalpha(int character)
{
	if((97 <= character && character <= 122) || (65 <= character && character <= 90))
		return 1;
	else 
		return 0;
}