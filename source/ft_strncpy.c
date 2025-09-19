#include "libft.h"

/*
** @brief Copies at least 'n' values from 'src'.
** @param 'dest' Memory address that will receive the value.
** @param 'src' Memory address that contains the values that will be copied.
** @param 'n' Number of chars that will be copied, at least.
** @return Returns a pointer to the memory address that received the copied value.
*/

char *ft_strncpy(char *dest, const char *src, size_t n) {
	if (!src) return NULL;
	char *tmp = dest;
	while (n--) {
		if (*src == '\0') *tmp++ = '\0';
		else *tmp++ = *src++;
	}
	return dest;
}