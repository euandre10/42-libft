#include "libft.h"

/*
** @brief Free the memory passed by 'ap' and sets its pointer to NULL.
** @param 'ap' Pointer to another pointer.
*/

void ft_memdel(void **ap) {
	if (ap && *ap) {
		free(*ap);
		*ap = NULL;
	}
}