#include "libft.h"

/*
** @brief Find the last occurence of 'c' in 's'.
** @param 's' String that will be searched.
** @param 'c' Any character from ASCII table.
** @return Returns a pointer to the memory address of 'c' if found. NULL if not found.
*/

char *ft_strrchr(const char *s, int c) {
	size_t s_len = ft_strlen(s);
	const char *pointer = s + s_len;
	while (*pointer) {
		if (*pointer == c) return pointer;
		pointer--;
	}
	return NULL;
}