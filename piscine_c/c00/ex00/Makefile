all: build check
build:
	gcc -Wall -Wextra -Werror main.c ft_putchar.c && ./a.out 
check:
	norminette -R CheckForbiddenSourceHeader ft_putchar.c 
