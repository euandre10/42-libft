#include "libft.h"

/*
** @brief Check if 'c' is a printable char from ascii.
** @param 'c' Any char from ascii table.
** @return Returns 'c' if true, 0 if false.
*/

int ft_isprint(int c) {
	return (c >= 32 && c <= 127) ? c : 0;
}