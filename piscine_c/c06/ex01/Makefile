all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror  ft_*.c && ./a.out test1 test2 test3; 
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c; 
	@echo "";
	@echo "----------------------";
rename:
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
copy:
	cp ft_*.c Makefile ../ex$(NUM)
