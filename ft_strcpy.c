#include "libft.h"

/*
** @brief Copies the given 'src' string to the memory address pointed by 'dest'.
** @param 'dest' Memory address that will receive the copy of the string.
** @param 'src' The string that will be copied.
** @return Returns a pointer to the memory address of 'dest'.
*/

char *ft_strcpy(char *dest, const char *src) {
	char *tmp = dest;
	while (*src) *tmp++ = *src++;
	*tmp = '\0';
	return dest;
}