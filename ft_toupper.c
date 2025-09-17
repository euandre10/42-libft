#include "libft.h"

/*
** @brief Transforms any lowercase char into uppercase.
** @param 'c' Any char from ascii table.
** @return Returns the value of the 'c' in uppercase or 0 if not a alphabet char.
*/

int ft_toupper(int c) {
	return (c >= 'a' && c <= 'z') ? c + 32 : return 0;
}