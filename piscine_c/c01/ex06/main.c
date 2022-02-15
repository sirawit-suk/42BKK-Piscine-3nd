#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char str[100] = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
	int number = 0;

	number = ft_strlen(str);
	printf("%d\n", number);

	char str1[] = "wtf";
	number = ft_strlen(str1);
	printf("%d\n", number);

	char str2[] = "1234556";
	number = ft_strlen(str2);
	printf("%d\n", number);

	char str3[] = "eiei";
	number = ft_strlen(str3);
	printf("%d\n", number);

	char str4[] = "hello !";
	number = ft_strlen(str4);
	printf("%d\n", number);
}
