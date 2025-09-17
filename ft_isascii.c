#include "libft.h"

/*
** @brief Checks if 'c' is a ascii char.
** @param 'c' Any character to be checked.
** @return Returns 'c' if it is ascii, 0 if not ascii.
*/

int ft_isascii(int c) {
	return (c >= 0 && c <= 255) ? c : 0;
}