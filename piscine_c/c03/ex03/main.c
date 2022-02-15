#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char str1[100] = "abc";
	char str2[] = "def";
	char *str3;
	str3 = ft_strncat(str1,str2,2);
	printf("%s %s\n", str3, str1);
	
	char str4[100] = "hello ";
	char str5[] = "world";
	char *str6;
	str6 = ft_strncat(str4,str5,3);
	printf("%s %s\n", str6, str4);
	
	char str7[100] = "test";
	char str8[] = " 02";
	char *str9;
	str9 = ft_strncat(str7,str8,2);
	printf("%s %s\n", str9, str7);
}
