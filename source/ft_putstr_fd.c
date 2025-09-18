#include "libft.h"

/*
** @brief Outputs the 's' str to 'fd' file descriptor.
** @param 's' String that will be used.
** @param 'fd' File descriptor that will be outputed.
*/

void ft_putstr_fd(char const *s, int fd) {
	if (!s) return;
	unsigned int i = 0;
	while (s[i]) write(fd, &s[i], 1);
}