# 42 - Libft.

## Alguns avisos antes..
⚠️ - Não estou participando e nem nunca participei de nenhum projeto da 42.<br>
⚠️ - Não recomendo o uso desse repositório e seu material como referência para quem está participando oficialmente da 42.<br>
⚠️ - Eu segui as regras explicadas no PDF na maior parte do tempo, mas em algumas coisas fiz do meu jeito.<br>
⚠️ - Todos os arquivos e PDFs foram encontrados aqui mesmo no Github através de repositórios de ex-alunos da 42.<br>
⚠️ - Talvez seja óbvio, mas enfim: Nada aqui é meu. Todos os direitos e autorais dos arquivos e projetos são da 42.<br>

Se precisar entrar em contato comigo, clique <a href="https://github.com/euandre10">aqui</a>.<br>

## Sobre esse repositório.

> 🧑‍💻 Último update: 20/09/25.<br>
> 🇺🇸 Para acessar a versão em inglês, clique <a href="https://github.com/euandre10/42-libft">aqui</a>.<br>
> 📄 Para acessar o PDF do projeto, clique <a href="https://github.com/euandre10/42-libft/blob/master/pdf/libft.pdf">aqui</a>.<br><br>
🌐 Você pode clonar esse repositório usando o seguinte comando:<br>```git clone https://github.com/euandre10/42-libft.git```<br>

Eu aprendi sobre a 42 quando estava vendo esse <a href="https://youtu.be/oUPaJxk6TZ0?t=2778">video</a> do <b>Fábio Akita</b> 
(que eu recomendo demais, mesmo que você não fale português!). Assim que terminou o vídeo, fiquei curioso e procurei saber mais.
Infelizmente não consegui participar oficialmente da 42 (SP ou RJ) por causa de problemas logísticos e financeiros. Mas depois de fazer 
algumas buscas na internet, descobri que conseguia acesso aos arquivos e PDFs dos projetos por repositórios antigos de ex-alunos. Com isso
comecei a praticar e fazer os exercícios que encontrava.<br>

O primeiro exercício/projeto que tentei foram os da **Piscina**, que eu quase concluí 100%, mas nunca postei aqui. Enquanto tava fazendo
esses exercícios, aprendi muita coisa nova sobre terminal, script e linguagem C. Além disso, mudei meu sistema operacional principal para o
Arch Linux (mesmo depois de muita frustração, claro) e conheci as diferenças entre os sistemas Unix-like e Windows.<br>

O próximo projeto foi a **libft**, que fiz várias vezes (criava e depois deletava) só para praticar e tentar fazer o código e as funções
de uma maneira diferente a cada vez que tentava (alterando loops, usando ponteiros para iterar no lugar de variáveis ​​de índice, criando o código
mais curto possível para uma função, implementando tratamento de erros em algumas funções, etc). Agora pretendo seguir para o próximo projeto
**get-next-line**.<br>

Dito isso, meu principal objetivo aqui e em qualquer outro projeto é apenas um: melhorar em ciência da computação e programação em geral, enquanto
me divirto fazendo isso, que é a parte mais importante. 😅

## Libft - Parte obrigatória.
O projeto completo deve conter 40+ funções no total, então pensei que seria melhor dividir as funções em categorias para ficar melhor de encontrar
e saber mais. A divisão ficou em 3 categorias: **memória**, **strings**, **utilidades**. Cada função tem um breve comentário em seu arquivo '.c',
explicando tudo sobre a função em específico e como ela funciona.<br>

Essa parte obrigatória apenas contem as duas primeiras partes do PDF - as funções do módulo Libc (primeira parte) e as funções customizadas (segunda
parte). Não fiz a parte bonus (que contém funções da estrutura de dados linked list (lista ligada)) ainda, mas pretendo fazê-lo no futuro.

### Funções relacionadas a memória.
Manipulam diretamente a memória em C - *alocação, dealocação, definição de valores e cópia de bytes.<br>

| Nome         | Categoria    | Corpo da função                                             | Descrição                                                               |
| :--------    | :----------: | :--------------------------------------------------------   | :---------------------------------------------------------------------- |  
| ft_memset    | memória      | void * (void *s, int c, size_t n);                          | Set all values to 'c' while 'n' bytes.                                  |
| ft_bzero     | memória      | void   (void *s, size_t n);                                 | Set all values to 0.                                                    |
| ft_memcpy    | memória      | void * (void *dest, const void *src, size_t n);             | Copy all values from 'src' to 'dest' while 'n'.                         |
| ft_memccpy   | memória      | void * (void *dest, const void *src, int c, size_t n);      | Copy all values from 'src' while 'n'.                                   |
| ft_memmove   | memória      | void * (void *dest, const void *src, size_t n);             | Copy 'src' to 'dest' while handling overlap.                            |
| ft_memchr    | memória      | void * (const void *s, int c, size_t n);                    | Search for 'c' in 's' memory address.                                   |
| ft_memalloc  | memória      | void * (size_t size);                                       | Allocate 'size' bytes of memory and set its values to 0.                |
| ft_memdel    | memória      | void   (void **ap);                                         | Free the allocated memory and set the pointer to NULL.                  |

### Funções relacionadas a strings.
Lidam diretamente com strings - *alocação, dealocação, mudanças, cópia, contagem de tamanho, etc*.

| Nome         | Categoria    | Corpo da função                                            | Descrição                                                               |
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

### Funções relacionadas a utilidade.
Lidam com *verificação de caracteres e números, transformação de texto em números e vice-versa, etc*.
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
