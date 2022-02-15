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
rename:
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
	@sed 's/$(OLD)/$(NEW)/g' main.c > test2
	@mv test2 main.c
copy:
	cp ft_*.c main.c Makefile ../ex$(NUM)
