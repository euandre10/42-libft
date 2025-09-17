#include "libft.h"

/*
** @brief Transforms every ascii number into integer.
** @param 'nptr' String with the values.
** @return Returns the number in the integer format, 0 if no digit found or -1 if string error.
*/

int ft_atoi(const char *nptr) {
	if (!nptr) return -1;
	while (*nptr != '-' && (*nptr < '0' || *nptr > '9')) nptr++;
	int is_negative = 0;
	if (*nptr == '-' && *(nptr + 1) >= '0' && *(nptr + 1) <= '9') {
		is_negative = -1;
		nptr++;
	}
	int number = 0;
	while (*nptr) {
		if (*nptr < '0' || *nptr > '9') {
			nptr++;
			continue;
		}
		int digit = *nptr - '0';
		number = (number * 10) + digit;
		nptr++;
	}
	if (is_negative) return number *= -1;
	else return number;
}