#include "libft.h"

/*
** @brief Converts an integer to string and outputs it.
** @param 'n' Integer number to be printed.
*/

void ft_putnbr(int n) {
	char *new = ft_itoa(n);
	if (!new) return;
	unsigned int i = 0;
	while (new[i]) write(1, &new[i++], 1);
}