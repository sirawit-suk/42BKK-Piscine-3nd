all: build check
build:
	gcc -Wall -Wextra -Werror main.c ft_print_alphabet.c && ./a.out 
check:
	norminette -R CheckForbiddenSourceHeader ft_print_alphabet.c 
