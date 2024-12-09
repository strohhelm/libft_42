# FT_LIBFT
## The first project of the 42 curriculum!
In this Project i had to write my own standard library, that i used in almost all of the subsequent projects.
It is supposed to be compiled into an archive file and to be compiled together with the main program where these functions are needed.
To achieve that, a Makefile is used which will compile all functions into the .a file.

It took me 12 days to complete. Most of the function were already known to me through the piscine, in which we did similar exercises.
I used the linux manual to replicate the original stdlib functions and to understand exactly what they do.
The only pre existing C-functions i was allowed to use were: malloc(), write(), and free() in certain functions.
Understanding how these small functions worked helped me exraordinarily much in the fiollowing projects and gave me a fundamental understanding
of low level string, number and memory operations.

I recall struggling with more complex functions like ft_split and ft_strtrim, that required several additional functions due to the code norm of the 42 school.
I struggled for several days on small but important issues in certain edgecases, but with the help of some peers is got it working in the end.

In heinsight eventhough i did all the bonus functions that are quite helpful for linked list data structures, i did not understand their full potential until the last C porject of the curriculum.
Some part of the reason for that is due to me in general preferring an array heavy style, since i like the control and memory management of it. But in some circumstances a liked list is much more
convenient, and every time i used them in projects, i rewrote all the base functions for the individual project structures instead of using the ones in my libft.
All the better now though that i came to this conclusion and now know how to use all of these functions.

## Usage
To build the library simply clone the repo:
```
  git@github.com:strohhelm/libft_42.git
```
compile the archive file

```
cd libft_42 && make
```
now a libft.a file will appear in the root of the directory that you can include in further programs.

## Functions that this library consists of:
* [`ft_atoi.c`](src/ft_atoi.c)
* [`ft_bzero`](src/ft_bzero.c)
* [`ft_calloc`](src/ft_calloc.c)
* [`ft_isalnum`](src/ft_isalnum.c)
* [`ft_isalpha`](src/ft_isalpha.c)
* [`ft_isascii`](src/ft_isascii.c)
* [`ft_isdigit`](src/ft_isdigit.c)
* [`ft_isprint`](src/ft_isprint.c)
* [`ft_itoa`](src/ft_itoa.c)
* [`ft_memchr`](src/ft_memchr.c)
* [`ft_memcmp`](src/ft_memcmp.c)
* [`ft_memcpy`](src/ft_memcpy.c)
* [`ft_memmove`](src/ft_memmove.c)
* [`ft_memset`](src/ft_memset.c)
* [`ft_putchar_fd`](src/ft_putchar_fd.c)
* [`ft_putendl_fd`](src/ft_putendl_fd.c)
* [`ft_putnbr_fd`](src/ft_putnbr_fd.c)
* [`ft_putstr_fd`](src/ft_putstr_fd.c)
* [`ft_split`](src/ft_split.c)
* [`ft_strchr`](src/ft_strchr.c)
* [`ft_strdup`](src/ft_strdup.c)
* [`ft_striteri`](src/ft_striteri.c)
* [`ft_strjoin`](src/ft_strjoin.c)
* [`ft_strlcat`](src/ft_strlcat.c)
* [`ft_strlcpy`](src/ft_strlcpy.c)
* [`ft_strlen`](src/ft_strlen.c)
* [`ft_strmapi`](src/ft_strmapi.c)
* [`ft_strncmp`](src/ft_strncmp.c)
* [`ft_strnstr`](src/ft_strnstr.c)
* [`ft_strrchr`](src/ft_strrchr.c)
* [`ft_strtrim`](src/ft_strtrim.c)
* [`ft_substr`](src/ft_substr.c)
* [`ft_tolower`](src/ft_tolower.c)
* [`ft_toupper`](src/ft_toupper.c)

### Linked list functions
* [`ft_lstadd_back_bonus`](src/ft_lstadd_back_bonus.c)
* [`ft_lstadd_front_bonus`](src/ft_lstadd_front_bonus.c)
* [`ft_lstclear_bonus`](src/ft_lstclear_bonus.c)
* [`ft_lstdelone_bonus`](src/ft_lstdelone_bonus.c)
* [`ft_lstiter_bonus`](src/ft_lstiter_bonus.c)
* [`ft_lstlast_bonus`](src/ft_lstlast_bonus.c)
* [`ft_lstmap_bonus`](src/ft_lstmap_bonus.c)
* [`ft_lstnew_bonus`](src/ft_lstnew_bonus.c)
* [`ft_lstsize_bonus`](src/ft_lstsize_bonus.c)
