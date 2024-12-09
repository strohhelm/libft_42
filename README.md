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

functions that this library consists of:

* [`ft_isascii`](ft_isascii.c)
* [`ft_isalnum`](ft_isalnum.c)
* [`ft_isalpha`](ft_isalpha.c)
* [`ft_islower`](ft_islower.c)
* [`ft_isupper`](ft_isupper.c)
* [`ft_isdigit`](ft_isdigit.c)
* [`ft_isxdigit`](ft_isxdigit.c)
* [`ft_isprint`](ft_isprint.c)
* [`ft_isgraph`](ft_isgraph.c)
* [`ft_isspace`](ft_isspace.c)
* [`ft_isblank`](ft_isblank.c)
* [`ft_ispunct`](ft_ispunct.c)
* [`ft_iscntrl`](ft_iscntrl.c)
* [`ft_tolower`](ft_tolower.c)
* [`ft_toupper`](ft_toupper.c)
