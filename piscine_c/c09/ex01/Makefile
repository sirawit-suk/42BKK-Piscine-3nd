SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)

NAME = ft
LIBNAME = lib$(NAME).a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	ar -rc $(LIBNAME) $(OBJS)
clean:
	${RM} $(OBJS)
fclean: clean
	${RM} $(LIBNAME)
re: fclean all
