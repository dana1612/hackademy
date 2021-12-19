#ifndef LIBFT_H_
# define LIBFT_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int my_strlen(const char *str);
int ft_abs (int val );
int ft_isalpha(int character);
int ft_isascii(int ch);
div_t ft_div( int numer,  int  denom );
int ft_isdigit(int character);
int ft_toupper(int character)
int ft_tolower (int c);
char* ft_strjoin (char const *s1, char const *s2);
void* ft_memset( void * memptr, int val, size_t num );
void* ft_memcpy(void * destptr, const void * srcptr, size_t num);
int ft_memcmp(const void * memptr1, const void * memptr2, size_t num);
void ft_bzero(void * s , size_t  n );
char* ft_strstr(char *str1, char *str2);
char* ft_strchr(char *string, unsigned int symbol );
void ft_striter (char *s, void(*f)(char *));
char* ft_strtrim(char const *s);
char* ft_strnstr(const char *big, const char *little, size_t len);

#endif

