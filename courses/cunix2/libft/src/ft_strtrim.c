#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char* ft_strtrim(char const *s)
{
	int	i, len;
	char *ss;
	if (s == NULL)	return NULL;
	len = my_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')	len--;
	i = (-1);
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')	len--;
	if (len <= 0)	len = 0;
	ss = (char*)malloc(sizeof(char) * (len + 1));
	if (ss == NULL)	return NULL;
	s = s + i;
	i = -1;
	while (++i < len)
		ss[i] = *s++;
	ss[i] = '\0';
	return ss;
}