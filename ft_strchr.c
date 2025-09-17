#include "libft.h"

/*
** @brief Find the first occurence of 'c' in 's'.
** @param 's' The string that will be searched.
** @param 'c' The character that will be searched in 's'.
** @return Returns a pointer to the memory address if 'c' was found, NULL if not found.
*/

char *ft_strchr(const char *s, int c) {
	while (*s) {
		if (*s == c) return (char *)s;
		s++;
	}
	return NULL;
}