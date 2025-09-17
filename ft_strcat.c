#include "libft.h"

/*
** @brief Concatenates two strings.
** @param 'dest' The string that will be concatenated.
** @param 'src' The string values that will be copied to 'dest'.
** @return Returns a pointer to the memory address of 'dest' with the concatenated string.
*/

char *ft_strcat(char *dest, const char *src) {
	if (!src) return NULL;
	size_t dest_len = ft_strlen(dest);
	char *tmp = dest + dest_len;
	while (*src) *tmp++ = *src++;
	*tmp = '\0';
	return dest;
}