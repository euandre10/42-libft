#include "libft.h"

/*
** @brief Compare two strings.
** @param 's1' First string.
** @param 's2' Second string.
** @return Returns the difference between both strings or returns 0 if both are equals.
*/

int ft_strcmp(const char *s1, const char *s2) {
	if (!s1 || !s2) return 0;
	while (*s1 && *s2) {
		if (*s1 != *s2) return *s1 - *s2;
		s1++; s2++;
	}
	return 0;
}