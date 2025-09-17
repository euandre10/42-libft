#include "libft.h"

/*
** @brief Same as 'strmap' but with an index number to use as you like.
*/

char *ft_strmapi(char const *s, char (*f) (unsigned int, char)) {
	size_t len = ft_strlen(s);
	char *new_str = (char *)malloc(len + 1);
	unsigned int index = 0;
	while (*s) f(index++, *s++);
	new_str[index] = '\0';
	return new_str;
}