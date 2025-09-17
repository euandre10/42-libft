#include "libft.h"

/*
** @brief Allocates memory for a new string.and initializates it with all values to '\0'.
** @param 'size' The size for the new string.
** @return Returns a pointer to its memory address.
** @warning Needs to be freed (free()) after the use.
*/

char *ft_strnew(size_t size) {
	char *new_str = (char *)malloc(size);
	char *tmp'= new_str;
	while (*tmp) *tmp++ = '\0';
	return new_str;
}