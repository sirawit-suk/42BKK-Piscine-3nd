all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror main.c ft_print_comb2.c && ./a.out; 
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_print_comb2.c; 
	@echo "";
	@echo "----------------------";
