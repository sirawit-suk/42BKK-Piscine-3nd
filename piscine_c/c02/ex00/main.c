#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char str1[] = "kkkkkkkkkkkk";
	char str2[] = "1234";
	char *str3;

	printf("before %s %s\n",str1, str2);
	str3 = ft_strcpy(str1,str2);
	printf("after %s %s str3=%s\n", str1, str2, str3);
	
	char str4[100];
	char str5[100] = "hello world!";
	char *str6 = 0;

	printf("before %s %s\n",str4, str5);
	str6 = ft_strcpy(str4,str5);
	printf("after %s %s str3=%s\n", str4, str5, str6);
}
