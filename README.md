# FT_LIBFT
## The first project of the 42 curriculum! 🚀
In this Project i had to write my own standard library, that i used in almost all of the subsequent projects.
It is supposed to be compiled into an archive file and to be compiled together with the main program where these functions are needed.
To achieve that, a Makefile is used which will compile all functions into the .a file.

It took me 12 days to complete. Most of the function were already known to me through the piscine, in which we did similar exercises.
I used the linux manual to replicate the original stdlib functions and to understand exactly what they do.
The only pre existing C-functions i was allowed to use were: malloc(), write(), and free() in certain functions.
Understanding how these small functions worked helped me exraordinarily much in the following projects and gave me a fundamental understanding
of low level string, number and memory operations.

I recall struggling with more complex functions like ft_split and ft_strtrim, that required several additional functions due to the code norm of the 42 school.
I struggled for several days on small but important issues in certain edgecases, but with the help of some peers is got it working in the end.

In hindsight eventhough i did all the bonus functions that are quite helpful for linked list data structures, i did not understand their full potential until the last C porject of the curriculum.
Some part of the reason for that is due to me in general preferring using arrays, since i like the control and memory management of it. But in some circumstances a liked list is much more
convenient, and every time i used them in projects, i rewrote all the base functions for the individual project structures instead of using the ones in my libft.
All the better now though that i came to this conclusion and now know how to use all of these functions.

## Usage
To build the library simply clone the repo:
```
  git clone git@github.com:strohhelm/libft_42.git
```
compile the archive file

```
cd libft_42 && make
```
now a libft.a file will appear in the root of the directory that you can include in further programs.

## Functions that this library consists of:
| Function                              | Description |
|---------------------------------------|--------------|
|  [`ft_atoi`](src/ft_atoi.c)            | turns a string into an integer.                     |
|  [`ft_bzero`](src/ft_bzero.c)            | turns the first n characters of a string into '\0'. |
|  [`ft_calloc`](src/ft_calloc.c)          | allocates n bytes of memory and sets them to '\0'.  |
|  [`ft_isalnum`](src/ft_isalnum.c)        |  tests if a charracter is alphanumerical. |
|  [`ft_isalpha`](src/ft_isalpha.c)        |  tests if a charracter is aphabetical.|
|  [`ft_isascii`](src/ft_isascii.c)        |  tests if a charracter is an ascii character.|
|  [`ft_isdigit`](src/ft_isdigit.c)        |  tests if a charracter is a number.|
|  [`ft_isprint`](src/ft_isprint.c)        |  tests if a charracter is a printable character.|
|  [`ft_itoa`](src/ft_itoa.c)              |  turns an integer into a string.|
|  [`ft_memchr`](src/ft_memchr.c)          |  locates the first occurance of a character in a string|
|  [`ft_memcmp`](src/ft_memcmp.c)          |  compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.|
|  [`ft_memcpy`](src/ft_memcpy.c)          |  copies n bytes from memory area src to memory area dst. Not overlap safe.|
|  [`ft_memmove`](src/ft_memmove.c)        |  copies n bytes from memory area src to memory area dst. Overlap safe.|
|  [`ft_memset`](src/ft_memset.c)          |  writes len bytes of value character c to the string b.|
|  [`ft_putchar_fd`](src/ft_putchar_fd.c)  |  writes a character to a specified file descriptor.|
|  [`ft_putendl_fd`](src/ft_putendl_fd.c)  |  writes a  a string and a following newline character to a specified file descriptor.|
|  [`ft_putnbr_fd`](src/ft_putnbr_fd.c)    |  writes an integer as a string to a specified file descriptor.|
|  [`ft_putstr_fd`](src/ft_putstr_fd.c)    |  writes a string to a specified file descriptor.|
|  [`ft_split`](src/ft_split.c)            |  splits a string at a specified character into an array of trings, while removing this character.|
|  [`ft_strchr`](src/ft_strchr.c)          |  returns a pointer to the  first occurrence of the character c in the string s.|
|  [`ft_strdup`](src/ft_strdup.c)          |  duplicates a string. makes a deep cpoy of it.|
|  [`ft_striteri`](src/ft_striteri.c)      |  iterates over each character of a string and executes a function on it.|
|  [`ft_strjoin`](src/ft_strjoin.c)        |  joins two strings.|
|  [`ft_strlcat`](src/ft_strlcat.c)        |  appends string src to the end of dst. Not overlap safe.|
|  [`ft_strlcpy`](src/ft_strlcpy.c)        |  pies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.|
|  [`ft_strlen`](src/ft_strlen.c)          |  returns the length of a string preceeding the terminating '\0' character.|
|  [`ft_strmapi`](src/ft_strmapi.c)        |  Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string.|
|  [`ft_strncmp`](src/ft_strncmp.c)        |  lexicographically compare the null-terminated strings s1 and s2. compares not more than n characters.|
|  [`ft_strnstr`](src/ft_strnstr.c)        |  locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.|
|  [`ft_strrchr`](src/ft_strrchr.c)        |  returns a pointer to the last occurrence of the character c in the string s.|
|  [`ft_strtrim`](src/ft_strtrim.c)        |  returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
|  [`ft_substr`](src/ft_substr.c)          |  returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
|  [`ft_tolower`](src/ft_tolower.c)        |  converts an upper-case letter to the corresponding lower-case letter.|
|  [`ft_toupper`](src/ft_toupper.c)        |  converts a lower-case letter to the corresponding upper-case letter.|
 | **Linked list functions**| |
|  [`ft_lstadd_back_bonus`](src/ft_lstadd_back_bonus.c)        |  Adds the node ’new’ at the end of the list.|
|  [`ft_lstadd_front_bonus`](src/ft_lstadd_front_bonus.c)      |  Adds the node ’new’ at the beginning of the list.|
|  [`ft_lstclear_bonus`](src/ft_lstclear_bonus.c)              |  Deletes and frees the given node and every successor of that node, using the function ’del’ and free on it.|
|  [`ft_lstdelone_bonus`](src/ft_lstdelone_bonus.c)            |  Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. |
|  [`ft_lstiter_bonus`](src/ft_lstiter_bonus.c)                |  Iterates the list ’lst’ and applies the function ’f’ on the content of each node.|
|  [`ft_lstlast_bonus`](src/ft_lstlast_bonus.c)                |  Returns the last node of the list.|
|  [`ft_lstmap_bonus`](src/ft_lstmap_bonus.c)                  | Iterates the list ’lst’ and applies the function ’f’ oneach node. Creates a new list resulting of the successive applications of the function ’f’.|
|  [`ft_lstnew_bonus`](src/ft_lstnew_bonus.c)                  |  Allocates and returns a new node.|
|  [`ft_lstsize_bonus`](src/ft_lstsize_bonus.c)                |  Counts the number of nodes in a list.|
