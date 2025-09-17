#include "libft.h"

/*
** @brief Concatenate 'src' in 'dst' while 'size' > 0.
** @param 'dst' Memory block that will receive the concatenation.
** @param 'src' Memory block value that will be concatenated.
** @param 'size' Total size allocated for 'dst'.
** @return Returns the total length of the strings concat.
*/

size_t ft_strlcat(char *dst, const char *src, size_t size) {
	if (!src || !size) return 0;
	size_t dst_len = ft_strlen(dst), src_len = ft_strlen(src);
	if (dst_len >= size) return dst_len + src_len;
	size_t total_size = (size - dst_len) - 1;
	char *tmp = dst + dst_len;
	while (*src != '\0' && total_size--) *tmp++ = *src++;
	*tmp = '\0';
	return dst_len + src_len;
}