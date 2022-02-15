#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char str1[] = "kkkkkkkkkkkk";
	char str2[] = "12345";
	char *str3;

	printf("before %s %s\n",str1, str2);
	str3 = ft_strncpy(str1,str2,3);
	printf("after %s %s str3=%s\n", str1, str2, str3);
	
	char str4[100];
	char str5[100] = "hello world!";
	char *str6 = 0;

	printf("before %s %s\n",str4, str5);
	str6 = ft_strncpy(str4,str5,8);
	printf("after %s %s str3=%s\n", str4, str5, str6);
}
