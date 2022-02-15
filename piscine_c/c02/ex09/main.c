#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str1[] = "Yckhu0o$i";
	char *result1;
	result1 = ft_strcapitalize(str1);
	printf("%s result=%s\n", str1, result1);
	
	char str2[100] = "T,dk&9d'[#<i5";
	char *result2;
	result2 = ft_strcapitalize(str2);
	printf("%s result=%s\n", str2, result2);

	char str3[100] = "%5*     Qxq@<mccpy{a1jz}18=_jh93mz]:";
	char *result3;
	result3 = ft_strcapitalize(str3);
	printf("%s result=%s\n", str3, result3);

	char str4[100] = "P2#bav9";
	char *result4;
	result4 = ft_strcapitalize(str4);
	printf("%s result=%s\n", str4, result4);

	char str5[100] = "7Sr^u5iw<o";
	char *result5;
	result5 = ft_strcapitalize(str5);
	printf("%s result=%s\n", str5, result5);

	char str6[100] = "Vs]20^R%Oay>Zc@!-5jpxrh9n`=S4@Z<%+'$";
	char *result6;
	result6 = ft_strcapitalize(str6);
	printf("%s result=%s\n", str6, result6);

	char str7[100] = "Lczjwoj^t8%u$y@r9ezaks";
	char *result7;
	result7 = ft_strcapitalize(str7);
	printf("%s result=%s\n", str7, result7);

}
