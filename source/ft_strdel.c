#include "libft.h"

/*
** @brief Deletes the given string and sets its pointer to NULL.
** @param 'as' Pointer that will be freed and setted to NULL.
*/

void ft_strdel(char **as) {
	if (as && *as) {
		free(*as);
		*as = NULL;
	}
}