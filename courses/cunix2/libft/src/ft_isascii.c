#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

int ft_isascii(int ch)
{ 
	if(0 <= ch && ch <= 127)
		return 1;
	else 
		return 0;
}