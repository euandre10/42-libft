#include "libft.h"

/*
** @brief Outputs the char 'c' into standard output.
** @param 'c' Any char from ascii table.
*/

void ft_putchar(char c) {
	if (!c) return;
	write(1, &c, 1);
}