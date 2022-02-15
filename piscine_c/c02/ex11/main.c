#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main()
{
	char str1[] = "Test\n OK";
	ft_putstr_non_printable(str1);
	//printf("%s", str1);
}
