#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char str1[] = "ASDFASDFASDFASDFASDFDASF";
	char *result1;
	result1 = ft_strlowcase(str1);
	printf("%s result=%s\n", str1, result1);
	
	char str2[100] = "12345	67";
	char *result2;
	result2 = ft_strlowcase(str2);
	printf("%s result=%s\n", str2, result2);

	char str3[100] = "!@#!$##$^%*&(&*(_~_______%````ASSDASD";
	char *result3;
	result3 = ft_strlowcase(str3);
	printf("%s result=%s\n", str3, result3);

	char str4[100] = "SIRAWIT SUKWATTANAVIT";
	char *result4;
	result4 = ft_strlowcase(str4);
	printf("%s result=%s\n", str4, result4);

	char str5[100] = "as!@#dasd123123AAA";
	char *result5;
	result5 = ft_strlowcase(str5);
	printf("%s result=%s\n", str5, result5);

	char str6[100] = "ZZZZ XXXX YYYY";
	char *result6;
	result6 = ft_strlowcase(str6);
	printf("%s result=%s\n", str6, result6);

	char str7[100] = "OK";
	char *result7;
	result7 = ft_strlowcase(str7);
	printf("%s result=%s\n", str7, result7);

}
