#include "libft.h"

/*
** @brief Allocate memory and copies a substring in 's', given its location 'start' and its length 'len'.
** @param 's' String that will be used to copy the substr.
** @param 'start' Location that the function will start to copy the characters.
** @param 'len' Length of the substring wanted.
** @return Returns a new memory allocated with the substring in its values.
** @warning The user needs to use free() after it or it will cause memory leak.
*/

char *ft_strsub(char const *s, unsigned int start, size_t len) {
	char *new_str = (char *)malloc(len + 1);
	if (!new_str) return NULL;
	unsigned int i = 0;
	while (len--) new_str[i++] = s[start++];
	new_str[i] = '\0';
	return new_str;
}