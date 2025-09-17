#include "libft.h"

/*
** @brief Clear the given string, setting all its values to '\0'.
** @param 's' The string that will be cleared.
*/

void ft_strclr(char *s) {
	size_t str_len = ft_strlen(s);
	for (size_t i = 0; i < str_len; i++) s[i] = '\0';
}