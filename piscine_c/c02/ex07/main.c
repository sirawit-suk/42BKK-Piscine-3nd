#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char str1[] = "asdzxczxcaseqwasdasdasd";
	char *result1;
	result1 = ft_strupcase(str1);
	printf("%s result=%s\n", str1, result1);
	
	char str2[100] = "12345	67";
	char *result2;
	result2 = ft_strupcase(str2);
	printf("%s result=%s\n", str2, result2);

	char str3[100] = "!@#!$##$^%*&(&*(_~_______%````ASSDASD";
	char *result3;
	result3 = ft_strupcase(str3);
	printf("%s result=%s\n", str3, result3);

	char str4[100] = "AZXCsirawit sukwattanavitQWEQREWTR";
	char *result4;
	result4 = ft_strupcase(str4);
	printf("%s result=%s\n", str4, result4);

	char str5[100] = "as!@#dasd123123AAA";
	char *result5;
	result5 = ft_strupcase(str5);
	printf("%s result=%s\n", str5, result5);

	char str6[100] = "zzzz xxxxx";
	char *result6;
	result6 = ft_strupcase(str6);
	printf("%s result=%s\n", str6, result6);

	char str7[100] = "ok";
	char *result7;
	result7 = ft_strupcase(str7);
	printf("%s result=%s\n", str7, result7);

}
