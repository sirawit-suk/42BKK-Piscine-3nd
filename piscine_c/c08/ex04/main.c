#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(void)
{
	t_stock_str *new;

	char *a = "aaaaaaaaaaa";
	char *b = "bbbbbbb";
	char *c = "ccccc";
	char **test = malloc(sizeof(char*) * 3);
	test[0] = a;
	test[1] = b;
	test[2] = c;
	new = ft_strs_to_tab(3, test);

	for(int i=0; i<3; i++)
	{
		printf("new[%d].size %d\n", i, new[i].size);
		printf("new[%d].str %s\n", i, new[i].str);
		printf("new[%d].copy %s\n", i, new[i].copy);
	}
	ft_show_tab(new);

	return (0);
}
