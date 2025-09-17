#include "libft.h"

/*
** @brief Iterates through the given string using 'f' function on each character.
** @param 's' String that will be modified.
** @param 'f' Function that will be used on the each character of the string.
** @return Returns a new memory allocated string with the results of the 'f' function.
** @warning Need to use free() after the use to dealloc all the memory.
*/

char *ft_strmap(char const *s, char (*f) (char)) {
	size_t s_len = ft_strlen(s);
	char *new_str = (char *)malloc(s_len + 1);
	unsigned int i = 0;
	while (*s) new_str[i++] = f(*s++);
	new_str[i] = '\0';
	return new_str;
}