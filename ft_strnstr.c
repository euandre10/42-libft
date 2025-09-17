#include "libft.h"

/*
** @brief Works the same way 'ft_strstr' does, but with length limit to look for the substr.
** @param 'big' String that will be searched for 'little'.
** @param 'little' Substring that will be looked for in 'big'.
** @return Returns a pointer to the substring if found, NULL if not found.
*/

char *ft_strnstr(const char *big, const char *little, size_t len) {
	if (!little) return NULL;
	size_t little_len = ft_strlen(little);
	for (size_t i = 0; i < len; i++) {
		size_t j = 0;
		if (big[i] == little[j]) {
			for (j = j + 1; j < little_len; j++) 
				if (big[i + j] != little[j]) break;
		} 
		if (j == little_len) return (char *)big + i;
	}
	return NULL;
}