#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char str1[100] = "abc";
	char str2[] = "def";
	char *str3;
	str3 = ft_strcat(str1,str2);
	printf("%s %s\n", str3, str1);
	
	char str4[100] = "hello ";
	char str5[] = "world";
	char *str6;
	str6 = ft_strcat(str4,str5);
	printf("%s %s\n", str6, str4);
	
	char str7[100] = "test";
	char str8[] = " 02";
	char *str9;
	str9 = ft_strcat(str7,str8);
	printf("%s %s\n", str9, str7);
}
