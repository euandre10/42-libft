# 42 - Libft.

## Some notes first..
⚠️ - I am not officially participating in any 42 courses nor have participated in anytime. <br>
⚠️ - I do not recommend using this repository or any of its material as an example for the real 42 projects.<br>
⚠️ - I followed most of the rules specified in the project PDF, but here and there i changed some things to my way.<br>
⚠️ - By the way, i found the project PDF and all its other files here in Github.<br>
⚠️ - I do not own anything here. All copyrights/ownership of the files and projects goes to 42.<br> 
🟩 - Last but not least: English is not my first language (as you will see 😅), but we try it anyway. 😉

If needed you can contact me clicking <a href="https://github.com/euandre10">here</a>.<br>

## About this repository.

🧑‍💻 Last update: 20/09/25.<br>
🇧🇷 For the portuguese version, click <a href="">here</a>.<br>
📄 For the project file, click <a href="">here</a>.<br>

I learned about <b>42</b> and their projects in this <a href="https://youtu.be/oUPaJxk6TZ0?t=2778">video</a> from <b>Fábio Akita</b> (which i highly recommend, even if you don't speak portuguese!) and got instantly curious about it. Unfortunately i cannot make it into the 42 in SP or RJ, mainly due to logistical and financial dificulties. But after some searches here and there on the internet, i was lucky enough to found some of the materials in their students repositories here in Github and just started to practice and do the exercises right away. <br>

The first one i tried was the 'Piscine' exercises, which i did almost entirely but never got to post it here. While i made this one, i learned i lot about the terminal and about scripting. Changed my main operational system to Arch Linux (after getting beated several times trying to do it, of course 😂) and from that day on i always try to keep learning and practicing new things, because that's the first thing that you'll learn while doing anything from 42 - Learn how to learn anything. Even if you don't know a thing the specific matter, go after it!<br>

Then i made this **libft** project several times (made it then delete), just to practice and to try doing the same code and functions in a different way (changing loops, using pointers to iterate instead of index variables, doing the shortest code possible for a function, implementing error handling in some functions, etc). I mean, i guess that's the way you really learn something new, trying and doing it again and again and not doing just one time and leaving it, right? For now the only difference is that this time i posted it here and im planning to move on to their next project "**get-next-line**".

With all that said, my main goal here and in any other project is only one: to get better at computer science and programming overall while having fun doing it, which is the most important part i guess. 😅

## Libft - Mandatory part.
The whole project must have about 40+ functions in total, so i though that it will be better if the functions were divided in categories to make it easier to find and to know about. They were divided in 3 categories: **memory**, **strings**, **utilities**. Every function has a brief comment in its '.c' file, explaining everything about the specific function and how it works.<br><br>
This mandatory part only contains the first two parts - the Libc functions of the first part and the custom-made functions of the second part. I didn't made the bonus part (which contains functions for the linked list data structure) yet, which i will try to do it in the near future.

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
