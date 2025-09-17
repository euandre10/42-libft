#include "libft.h"

/*
** @brief Iterates through 's' with 'f' function.
** @param 's' String that will be used.
** @param 'f' Pointer to a function that will be used.
*/

void ft_striter(char *s, void (*f)(char *)) {
	if (!s) return;
	while (*s) f(s++);
}