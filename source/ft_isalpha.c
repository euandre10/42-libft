#include "libft.h"

/*
** @brief Checks if 'c' is a character from the alphabet.
** @param 'c' Any char from the ascii table.
** @return Returns the char if true, zero if it is not from the alphabet.
*/

int ft_isalpha(int c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? c : 0;
}