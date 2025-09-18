#include "libft.h"

/*
** @brief Outputs the string to the standard output.
** @param 's' String that will be used in the function.
*/

void ft_putstr(char const *s) {
	if (!s) return;
	unsigned int i = 0;
	while (s[i]) write(1, &s[i++], 1);
}