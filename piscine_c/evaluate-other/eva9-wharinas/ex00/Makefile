all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror main.c ft_*.c && ./a.out; 
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c; 
	@echo "";
	@echo "----------------------";
copy:
	cp Makefile ../ex$(NUM)
