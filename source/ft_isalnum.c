#include "libft.h"

/*
** @brief Checks if 'c' is a alphabet letter or digit.
** @param 'c' Any char from the ascii table.
** @return Returns 'c' if it is, zero if it is not.
*/

int ft_isalnum(int c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return c;
	else if (c >= '0' && c <= '9') return c;
	else return 0;
}