#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

int ft_isdigit(int character) 
{
	if(48 <= character && character <= 57)
		return 1;
	else 
		return 0;
}