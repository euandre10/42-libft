#include "libft.h"

/*
** @brief Copy all the values pointed by 'src' while 'n' or while 'c' wasn't found.
** @param 'dest' Pointer to the memory block that will receive the values.
** @param 'src' Pointer to the memory block that contains the values to be copied.
** @param 'c' The value that will stop the copy process when found in 'src'.
** @param 'n' Number of bytes to copy.
** @return Returns the next address of 'dest' when 'c' is found or NULL if 'c' not found.
*/

void *ft_memccpy (void *dest, const void *src, int c, size_t n) {
	if (!n) return NULL;
	unsigned char *destination = dest;
	const unsigned char *source = src;
	unsigned char ch = c;
	while (n--) {
		if (*source == ch) {
			*destination++ = *source++;
			return destination;
		} else *destination++ = *source++;
	}
	return NULL;
}