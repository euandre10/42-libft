#include "libft.h"

/*
** @brief Transforms any lowecase char to uppercase.
** @param 'c' Any char from ascii.
** @return Returns the value of the uppercase char or 0 if not a alphabet char.
*/

int ft_tolower(int c) {
	return (c >= 'A' && c <= 'Z') ? c - 32 : 0;
}