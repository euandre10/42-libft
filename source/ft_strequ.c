#include "libft.h"

/*
** @brief Check if the two strings are equal.
** @param 's1' First string to compare.
** @param 's2' Second string to compare.
** @return Returns 1 if both are equal, 0 if they are different, -1 if error.
*/

int ft_strequ(char const *s1, char const *s2) {
	if (!s1 || !s2) return -1;
	while (*s1 && *s2) {
		if (*s1 != *s2) return 0;
		s1++; s2++;
	}
	if (*s1 != *s2) return 0;
	else return 1;
}