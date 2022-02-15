#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char str1[100] = "abc";
	char str2[] = "defghi";
	int x1;
	x1 = ft_strlcat(str1,str2,100);
	printf("%s %d\n", str1, x1);
	
	char str4[100] = "time ";
	char str5[] = "stamp";
	int x2;
	x2 = ft_strlcat(str4,str5,3);
	printf("%s %d\n", str4, x2);
	
	char str7[100] = "hahaha ";
	char str8[] = "you ARE very funny";
	int x3;
	x3 = ft_strlcat(str7,str8,7);
	printf("%s %d\n", str7, x3);
}
