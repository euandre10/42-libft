#include "libft.h"

/*
** @brief Concatenate 'src' string to 'dest'.
** @param 'dest' String that will receive 'src'.
** @param 'src' String that will be concatenated to 'dest'.
** @param 'n' Number of chars that will be concatenated to 'dest'.
** @return Returns a pointer to 'dest' where contains the result of the concatenation.
*/

char *ft_strncat(char *dest, const char *src, size_t n) {
	if (!src) return NULL;
	size_t dest_len = ft_strlen(dest);
	char *tmp = dest + dest_len;
	while (n--) {
		if (*src == '\0') *tmp++ = '\0';
		else *tmp++ = *src++;
	}
	return dest;
}