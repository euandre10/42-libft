#include "libft.h"

/*
** @brief Transforms a int 'n' into 'str' n.
** @param 'n' Integer number to be converted.
** @return Returns a new memory allocated block with the result of the convertion.
*/

char *ft_itoa(int n) {
    if (n == 0) {
        char *new_str = (char *)malloc(2);
        if (!new_str) return NULL;
        new_str[0] = '0';
        new_str[1] = '\0';
        return new_str;
    }
	char *new_str = (char *)malloc(sizeof(int) * 12);
	if (!new_str) return NULL;
	char *tmp = new_str;
	int is_negative = 0;
	if (n < 0) { is_negative = 1; n = -n; }
	while (n) {
		int digit = n % 10;
		*tmp++ = digit + '0';
		n = n / 10;
	}
	if (is_negative) *tmp++ = '-';
	size_t str_len = strlen(new_str);
	char *start = new_str;
	char *end = (new_str + str_len) - 1;
	while (start < end) {
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++; end--;
	}
	*tmp = '\0';
	return new_str;
}