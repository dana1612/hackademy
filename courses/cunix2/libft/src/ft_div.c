#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

div_t ft_div( int numer,  int  denom )
{
	div_t temp;		
	temp.quot = numer / denom;
	temp.rem = numer % denom;
	return temp;
}