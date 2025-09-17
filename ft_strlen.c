#include "libft.h"

/*
** @brief Counts how many chars are in the given string 's'.
** @param 's' The string that all chars will be counted.
** @return Returns the size of the string.
*/

size_t ft_strlen(const char *s) {
	size_t len = 0;
	while (*s++) len++;
	return len;
}