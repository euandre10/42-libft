#include "libft.h"

/*
** @brief Outputs the 's' str into 'fd' file descriptor with a '\n' at the end.
** @param 's' String that will be printed.
** @param 'fd' File descriptor where the function will output data.
*/

void ft_putendl_fd(char const *s, int fd) {
	if (!s) return;
	unsigned int i = 0;
	char new_line = '\n';
	while (s[i]) write(fd, &s[i++], 1);
	write(fd, &new_line, 1);
}