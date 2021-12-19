#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

int ft_toupper(int character)
{
	if(('a' <= character) && (character <= 'z'))
            character -= 32;
	return character;
}