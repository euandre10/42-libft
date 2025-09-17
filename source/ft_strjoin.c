#include "libft.h"

/*
** @brief Concatenate two strings.
** @param 's1' First string.
** @param 's2' Second string.
** @return Returns a new memory allocated string with the concatenation of 's1' and 's2'.
** @warning Needs free() after the use or memory leak.
*/

char *ft_strjoin(char const *s1, char const *s2) {
	size_t dest_len = ft_strlen(s1);
	size_t src_len = ft_strlen(s2);
	char *new_str = (char *)malloc(dest_len + src_len + 1);
	if (!new_str) return NULL;
	ft_memset(new_str, 0, (dest_len + src_len) + 1);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return new_str;
}