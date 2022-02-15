#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	int result = -1;

	char str1[] = "ABASDASDWQEQWASDasdasdasdasd";
	result = ft_str_is_alpha(str1);
	printf("%s result=%d\n", str1, result);
	
	char str2[100] = "1234567";
	result = ft_str_is_alpha(str2);
	printf("%s result=%d\n", str2, result);

	char str3[100] = "123asdasds4567";
	result = ft_str_is_alpha(str3);
	printf("%s result=%d\n", str3, result);

	char str4[100] = "ASDASDASDASD";
	result = ft_str_is_alpha(str4);
	printf("%s result=%d\n", str4, result);

	char str5[100] = "as!@#dasd123123AAA";
	result = ft_str_is_alpha(str5);
	printf("%s result=%d\n", str5, result);

	char str6[100] = "asdasda asdasdasda";
	result = ft_str_is_alpha(str6);
	printf("%s result=%d\n", str6, result);

	char str7[100];
	result = ft_str_is_alpha(str7);
	printf("%s result=%d\n", str7, result);

}
