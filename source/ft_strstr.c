#include "libft.h"

/*
** @brief Find the substring 'needle' in 'haystack' string.
** @param 'haystack' String that will be searched.
** @param 'needle' Substring that will be searched for.
** @return Returns a pointer to the substring if found, NULL if not found.
*/

char *ft_strstr(const char *haystack, const char *needle) {
	size_t hay_len = ft_strlen(haystack), needle_len = ft_strlen(needle);
	for (size_t i = 0; i < hay_len; i++) {
		size_t j = 0;
		if (haystack[i] == needle[j])
			for (j = 1; j < needle_len; j++) if (haystack[i + j] != needle[j]) break;
		if (j == needle_len) return (char *)haystack + i;
	}
	return NULL;
}