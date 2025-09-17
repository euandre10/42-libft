#include "libft.h"

/*
** @brief Allocates fresh memory to use and return a pointer to its address.
** @param 'size' Number of bytes that will be allocated.
** @return Returns a pointer to the memory address with the fresh memory or NULL if allocation fails.
*/

void *ft_memalloc(size_t size) {
	unsigned char *pointer = (unsigned char *)malloc(size);
	if (!pointer) return NULL;
	for (size_t i = 0; i < size; i++) pointer[i] = 0;
	return (void *)pointer;
}