#include "libft.h"

/*
** @brief Very similar to 'ft_strcmp', but it compares for at least 'n' bytes.
** @param 's1' First string.
** @param 's2' Second string.
** @param 'n' Number of bytes that will be compared.
** @return Returns any number differente from zero if both are not equals, or returns 0 if both are equals.
*/

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	if (!s1 || !s2) return -1;
	while (n--) {
		if (*s1 != *s2) return *s1 - *s2;
		s1++; s2++;
	}
	return 0;
}