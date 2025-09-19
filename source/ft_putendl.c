#include "libft.h"

/*
** @brief Works like 'ft_putstr' but with a '\n' in the string end.
** @param 's' String that will be used in the function.
*/

void ft_putendl(char const *s) {
	if (!s) return;
	char new_line = '\n';
	ft_putstr(s);
	write(1, &new_line, 1);
}