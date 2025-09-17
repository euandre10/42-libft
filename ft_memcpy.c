#include "libft.h"

/*
** @brief Copies the values from 'src' to 'dest' while 'n'.
** @param 'dest' Pointer to the memory block that will receive the values from 'src'.
** @param 'src' Pointer to the memory block that values will be copied to 'dest'.
** @param 'n' Number of bytes to copy from 'src' to 'dest'.
** @return Returns the memory block pointed by 'dest' pointer.
*/

void *ft_memcpy(void *dest, const void *src, size_t n) {
	unsigned char *destination = dest;
	const unsigned char *source = src;
	while (n--) *destination++ = *source++;
	return dest;
}