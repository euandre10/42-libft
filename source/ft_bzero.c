#include "libft.h"

/*
** @brief Sets all values pointed by 's' to zero.
** @param 's' Pointer to the memory block that will be changed.
** @param 'n' Number of bytes that will be changed.
*/

void ft_bzero(void *s, size_t n) {
	unsigned char *pointer = s;
	while (n--) *pointer++ = 0;
}