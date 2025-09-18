#include "libft.h"

/*
** @brief Outputs the 'c' char to 'fd'.
** @param 'c' Any char from ascii table.
** @param 'fd' File descriptor to output.
*/

void ft_putchar_fd(char c, int fd) {
	if (!c) return;
	write(fd, &c, 1);
}