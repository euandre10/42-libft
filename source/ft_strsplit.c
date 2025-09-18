#include "libft.h"

static size_t count_words(const char *s, const char delim) {
	size_t i = 0, in_word = 0, word_count = 0;
	while (s[i] != '\0') {
		if (s[i] == delim) in_word = 0;
		else if (!in_word) { in_word = 1; word_count++; }
		i++;
	}
	return word_count;
}

static char *mystrtok(char *str, const char delim) {
    static char *pointer = NULL;
    if (str) pointer = str;
    if (!pointer) return NULL;
    char *start = pointer;
    while (*pointer) {
        if (*pointer == delim) {
        	*pointer = '\0';
        	pointer++;
        	return start;
        }
        pointer++;
    }
    pointer = NULL;
    return start;
}

static char *mystrdup(const char *s) {
	size_t s_len = ft_strlen(s);
	char *new_str = (char *)malloc(s_len + 1);
	char *tmp = new_str;
	while (*s) *tmp++ = *s++;
	*tmp = '\0';
	return new_str;
}

char **ft_strsplit(char const *s, char c) {
	if (!s) return NULL;
	char *cpystr = mystrdup(s);
	size_t arr_len = count_words(cpystr, c);
	char **arr = (char **)malloc(sizeof(char *) * (arr_len + 1));
	if (!arr) return NULL;
	char *token = mystrtok(cpystr, c);
	for (size_t i = 0; i < arr_len; i++) {
		if (!token) break;
		arr[i] = (char *)malloc(sizeof(char) * ft_strlen(token) + 1);
		ft_strcpy(arr[i], token);
		token = mystrtok(NULL, c);
	}
	arr[arr_len] = NULL;
	free(cpystr);
	return arr;
}