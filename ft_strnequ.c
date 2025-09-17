#include "libft.h"

/*
** @brief Compares two strings at least until 'n'.
** @param 's1' First string to compare.
** @param 's2' Second string to compare.
** @param 'n' Number of chars to compare.
** @return Returns 1 if both are equals, 0 if different.
*/

int ft_strnequ(char const *s1, char const *s2, size_t n) {
	if (!s1 || !s2) return 0;
	while (n && (*s1 && *s2)) { 
	    if (*s1 != *s2) return 0;
	    s1++; s2++; n--;
	}
	if (!n) return 1;
	else return (*s1 == *s2);
}