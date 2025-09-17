#include "libft.h"

/*
** @brief Checks if 'c' is a digit.
** @param 'c' Any char from the ascii table.
** @return Returns the digit or 0 if it is not a digit.
*/

int ft_isdigit(int c) {
	return (c >= '0' && c <= '9') ? c : 0;
}