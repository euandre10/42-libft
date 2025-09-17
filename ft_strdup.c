#include "libft.h"

/*
** @brief Allocates memory and duplicate the given 's' string.
** @param 's' The string that will be duplicated.
** @return Returns a pointer to the memory address with the duplicated string.
** @warning Needs to be freed after the use (free() function).
*/

char *ft_strdup(const char *s) {
	size_t len = ft_strlen(s);
	char *str_dup = (char *)malloc((len + 1) * sizeof(char));
	char *tmp = str_dup;
	while (*s) *tmp++ = *s++;
	*tmp = '\0';
	return str_dup;
}