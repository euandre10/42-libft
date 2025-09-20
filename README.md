# 42 - Libft.

🧑‍💻 Last update: 20/09/25.<br>
🇧🇷 <b>pt-BR</b> version, click <a href="">here</a>.<br>

1. <a href="https://github.com/euandre10/42-libft/edit/master/README.md#about-this-repository">About this repository</a><br>
2. <a href="https://github.com/euandre10/42-libft/edit/master/README.md#functions">Mandatory part (Functions)</a><br>


## About this repository.
I learned about <b>42</b> and their projects in this <a href="https://youtu.be/oUPaJxk6TZ0?t=2778">video</a> from <b>Fábio Akita</b> (which i highly recommend!) and got instantly curious about it. After some searches here and there, i found some of their material and PDFs in their students repositories here in Github and just started to practice and do the exercises and projects. The first one i tried was the 'Piscine' exercises, which i did almost entirely but never got to post it here.<br>

My main goal here is to get better at programming and computer science overall while trying to learn new things in this "non-standard way", which i really prefer 😅.

### Some notes...
· Just so you know, english is not my first language (you can see it right haha), but i try anyway. 😉<br>
· <b>I am not officialy participating in any 42 courses.</b> Like i said, main goal here is to learn new stuff and to have fun while doing it.<br>
· I don't recommend using this repository or any material as an example for the real 42 projects/exercises/tests.<br>
· Followed most of the exercises and projects rules but here and there i changed some things to my way, to what i think it was best.<br>
· Only did the first and second functions parts. The bonus part will be done in the future.<br>
· All .c files have a small "doc" in it, explaining the function, its parameters, etc. I'll try to do it in an separeted file too.<br>


## Mandatory part (Libc and Custom-made functions).
### Memory functions.
Functions that directly manipulate memory in C - *allocate, deallocate, set values and copy 'n' bytes*.<br>
| Name         | Category     | Prototype                                                   | Description                                                             |
| :--------    | :----------: | :--------------------------------------------------------   | :---------------------------------------------------------------------- |  
| ft_memset    | memory       | void * (void *s, int c, size_t n);                          | Set all values to 'c' while 'n' bytes.                                  |
| ft_bzero     | memory       | void   (void *s, size_t n);                                 | Set all values to 0.                                                    |
| ft_memcpy    | memory       | void * (void *dest, const void *src, size_t n);             | Copy all values from 'src' to 'dest' while 'n'.                         |
| ft_memccpy   | memory       | void * (void *dest, const void *src, int c, size_t n);      | Copy all values from 'src' while 'n'.                                   |
| ft_memmove   | memory       | void * (void *dest, const void *src, size_t n);             | Copy 'src' to 'dest' while handling overlap.                            |
| ft_memchr    | memory       | void * (const void *s, int c, size_t n);                    | Search for 'c' in 's' memory address.                                   |
| ft_memalloc  | memory       | void * (size_t size);                                       | Allocate 'size' bytes of memory and set its values to 0.                |
| ft_memdel    | memory       | void   (void **ap);                                         | Free the allocated memory and set the pointer to NULL.                  |

### String functions.
Functions that deals with strings - *allocate, deallocate, change, copy, count length,* etc.
| Name         | Category     | Prototype                                                  | Description                                                             |
| :----------- | :----------: | :--------------------------------------------------------  | :---------------------------------------------------------------------- |
| ft_strlen    | string       | size_t (const char *s);                                    | Count how many chars are in 's'.                                        |
| ft_strdup    | string       | char * (const char *s);                                    | Allocate memory and duplicate 's'.                                      |
| ft_strcpy    | string       | char * (char *dest, const char *src);                      | Copy 'src' to 'dest' memory address.                                    |
| ft_strncpy   | string       | char * (char *dest, const char *src, size_t n);            | Copy at least 'n' values from 'src'.                                    |
| ft_strcat    | string       | char * (char *dest, const char *src);                      | Concatenate 'src' into 'dest'.                                          |
| ft_strlcat   | string       | char * (char *dst, const char *src, size_t size);          | Concatenate 'src' into 'dst' while size + 1 > 0.                        |
| ft_strchr    | string       | char * (const char *s, int c);                             | Search for first occurrence of 'c' in 's'.                              |
| ft_strrchr   | string       | char * (const char *s, int c);                             | Search for last occurrence of 'c' in 's'.                               |
| ft_strstr    | string       | char * (const char *haystack, const char *needle);         | Search for the substring 'needle' in 'haystack'.                        |
| ft_strnstr   | string       | char * (const char *big, const char *little, size_t len);  | Search for the substring 'little' in 'big' while len > 0.               |
| ft_strcmp    | string       | int    (const char *s1, const char *s2);                   | Compare 's1' to 's2' and return the result.                             |
| ft_strncmp   | string       | int    (const char *s1, const char *s2, size_t n);         | Compare 's1' to 's2' while n > 0 and return the result.                 |
| ft_strnew    | string       | char * (size_t size);                                      | Allocate 'size' bytes of memory and set all values to '\0'.             |
| ft_strdel    | string       | void   (char **as);                                        | Free the allocated memory and set the pointer to NULL.                  |
| ft_strclr    | string       | void   (char *s);                                          | Clear the 's' string and set all values to '\0' again.                  |

### Utility functions.
Functions that deals with *checking characters and numbers, transforms text into number and vice-versa,* etc.
| Name         | Category     | Prototype                                                  | Description                                                             |
| :----------- | :----------: | :--------------------------------------------------------  | :---------------------------------------------------------------------- |
| ft_atoi      | Utility      | int    (const char *nptr);                                 | Transform 'nptr' number to an integer number.                           |
| ft_isalpha   | Utility      | int    (int c);                                            | Check if 'c' is an alphabet char (a-z).                                 |
| ft_isdigit   | Utility      | int    (int c);                                            | Check if 'c' is a digit (0-9).                                          |
| ft_isalnum   | Utility      | int    (int c);                                            | Check if 'c' is a digit (0-9) or alphabet char (a-z).                   |
| ft_isascii   | Utility      | int    (int c);                                            | Check if 'c' is an ASCII character.                                     |
| ft_isprint   | Utility      | int    (int c);                                            | Check if 'c' is printable.                                              |
| ft_toupper   | Utility      | int    (int c);                                            | Transform 'c' into a uppercase char (A-Z).                              |
| ft_tolower   | Utility      | int    (int c);                                            | Transform 'c' into a lowercase char (a-z).                              |
