#include "libft.h"

/*
** @brief Works like 'ft_putstr' but with a '\n' in the string end.
** @param 's' String that will be used in the function.
*/

void ft_putendl(char const *s) {
	if (!s) return;
	unsigned int i = 0;
	ft_putstr(s);
	write(1, '\n', 1);
}