#include "libft.h"

/*
** @brief Removes spaces in the beginning and in the end of the given string, while copying it to a new memory allocated block.
** @param 's' String to be trimmed and copied.
** @return Return a pointer to the new memory address with the resultant string.
*/

char *ft_strtrim(char const *s) {
    size_t s_len = strlen(s);
    char const *start = s;
    while (*start == ' ' || *start == '\n' || *start == '\t') start++;
	char const *end = (s + s_len) - 1;
	while (*end == ' ' || *end == '\n' || *end == '\t') end--;
	size_t trim_len = (end - start) + 1;
	if (!trim_len) return "";
	char *string = (char *)malloc(trim_len);
	if (!string) return NULL;
	unsigned int i = 0;
	while (start <= end) string[i++] = *start++;
	string[i] = '\0';
	return string;
}