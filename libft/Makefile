
NAME := libft.a
CC := cc
CFLAGS ?= -Wall -Wextra -Werror
HEADERFILES := libft.h 

CFILES := $(wildcard src/*.c)

OBJFILES := $(patsubst src/%.c, obj/%.o, $(CFILES))

BONUSCF := $(wildcard bonus/*.c)

BONUSOBJ := $(patsubst bonus/%.c, obj/%.o, $(BONUSCF))


$(NAME): $(OBJFILES) $(HEADERFILES)
	ar -rcs $(NAME) $(OBJFILES)

obj/%.o: src/%.c
	$(CC) -c $(CFLAGS) $^ -o $@

all: $(NAME)

bonus: $(OBJFILES) $(BONUSOBJ)
	ar -rcs $(NAME) $(OBJFILES) $(BONUSOBJ)
	
obj/%.o: bonus/%.c
	$(CC) -c $(CFLAGS) $^ -o $@
t: 
	$(CC) $(CFLAGS) $(CFILES) $(BONUSCF) -g

clean:
	rm -f $(OBJFILES)

fclean:
	rm -f $(OBJFILES) $(NAME) $(BONUSOBJ)

re: fclean all


.PHONY: all clean fclean re bonus t