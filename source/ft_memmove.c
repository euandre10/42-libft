#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t n) {
	unsigned char *destination = dest;
	const unsigned char *source = src;
	if (destination == source || n == 0) return dest;
	if (destination < source) {
		while (n--) *destination++ = *source++;
	} else {
		destination += n;
		source += n;
		while (n--) *(--destination) = *(--source);
	}
	return dest;
}