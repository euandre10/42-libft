#include "libft.h"

/*
** @brief Search for 'c' in 's' pointed memory address.
** @param 's' Pointer to the memory address that will be searched.
** @param 'c' Value to be searched.
** @param 'n' Size in bytes to search for the value 'c'.
** @return Returns a pointer to the memory address of the found value or NULL if not found.
*/

void *ft_memchr(const void *s, int c, size_t n) {
	unsigned char *pointer = s;
	unsigned char ch = c;
	while (n--) {
		if (*pointer == ch) return (void *)pointer;
		else pointer++;
	}
	return NULL;
}