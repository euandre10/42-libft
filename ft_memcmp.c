#include "libft.h"

/*
** @brief Compares the bytes between 's1' and 's2'.
** @param 's1' Pointer that gives the first memory block to compare.
** @param 's2' Pointer that gives the second memory block to compare.
** @param 'n' Number of bytes that will be compared between 's1' and 's2'.
** @return Returns a value different of zero if any mismatch was found or return 0 if both are equal.
*/

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    if (!n) return 0;
	const unsigned char *pointer1 = s1;
	const unsigned char *pointer2 = s2;
	while (n--) {
		if (*pointer1 != *pointer2) return *pointer1 - *pointer2;
		pointer1++; pointer2++;
	}
	return 0;
}