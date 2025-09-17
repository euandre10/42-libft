#include "libft.h"

/*
** @brief Iterates througth a string using the function 'f'.
** @param 's' String that will be iterated.
** @param 'f' Function that will be used in the string.
*/

void ft_striteri(char *s, void (*f) (unsigned int, char *s)) {
	if (!s || !f) return;
	unsigned int i = 0;
	while (s[i]) {
		f(i, &s[i]);
		i++;
	}
}