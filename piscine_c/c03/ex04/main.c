#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str1[100] = "abcde";
	char str2[] = "cd";
	char *str3;
	str3 = ft_strstr(str1,str2);
	printf("%s %s\n", str3, str1);
	
	char str4[100] = "time stamp";
	char str5[] = "stamp";
	char *str6;
	str6 = ft_strstr(str4,str5);
	printf("%s %s\n", str6, str4);
	
	char str7[100] = "aaabbbccc";
	char str8[] = "bca";
	char *str9;
	str9 = ft_strstr(str7,str8);
	printf("%s %s\n", str9, str7);
}
