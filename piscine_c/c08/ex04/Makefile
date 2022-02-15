all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror ft*.c main.c && ./a.out; 
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c;
	@echo "";
	@echo "----------------------";
rename:
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).h > test1
	@mv test1 $(NEW).h
	@rm $(OLD).h
	@sed 's/$(OLD)/$(NEW)/g' main.c > test2
	@mv test2 main.c
copy:
	cp ft* main.c Makefile ../ex$(NUM)
