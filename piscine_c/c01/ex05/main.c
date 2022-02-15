#include <stdio.h>

void ft_putstr(char *str);

int main()
{
	char str[100] = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";

	ft_putstr(str);
	printf("\n");

	char str1[] = "wtf";
	ft_putstr(str1);
	printf("\n");

	char str2[] = "1234556";
	ft_putstr(str2);
	printf("\n");

	char str3[] = "eiei";
	ft_putstr(str3);
	printf("\n");

	char str4[] = "hello !";
	ft_putstr(str4);
	printf("\n");
	
	ft_putstr("Hello world!");
	printf("\n");

}
