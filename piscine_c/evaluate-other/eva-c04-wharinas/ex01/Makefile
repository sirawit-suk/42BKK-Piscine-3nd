# FOR C02

all: gcc run

gcc: clear
	@echo '----------';
	@echo '##Compile & Run:';
	@gcc -Wall -Wextra -Werror *.c;
run:
	@./a.out;

norm: clear gcc
	@echo '';
	@echo '\n##Norminate check:';
	@norminette -R CheckForbiddenSourceHeader ft*.c;
	@echo '';

norm-all: clear 
	@norminette -R CheckForbiddenSourceHeader ./*/ft*.c;

clear:
	@clear;
