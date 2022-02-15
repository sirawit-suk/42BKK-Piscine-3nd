all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror main.c ft_putnbr.c && ./a.out; 
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_putnbr.c; 
	@echo "";
	@echo "----------------------";
