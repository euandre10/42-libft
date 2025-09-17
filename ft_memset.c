#include "libft.h"

/*
** @brief Set all values appointed by 's' to 'n'.
** @param 's' Pointer to the memory block that will be changed.
** @param 'c' Any character that will be setted as the value of the selected memory block.
** @param 'n' Number of bytes that will be changed.
** @return Returns the given 's' pointer with the new values that were setted.
*/

void *ft_memset(void *s, int c, size_t n) {
	unsigned char *pointer = s;
	while (n--) *pointer++ = (unsigned char)c;
	return s;
}