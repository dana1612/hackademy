#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

void ft_striter (char *s, void(*f)(char *))
{
	if (s && f && *s)
	{
		(*f)(s);
		ft_striter(s + 1, f);
	}
}