#include "libft.h"

/*
** @brief Transforms 'n' into str and outputs to 'fd'.
** @param 'n' Integer number that will be converted.
** @param 'fd' File descriptor that will be used to output.
*/

void ft_putnbr_fd(int n, int fd) {
	char *new = ft_itoa(n);
	if (!new) return;
	unsigned int i = 0;
	while (new[i]) write(fd, &new[i++], 1);
}