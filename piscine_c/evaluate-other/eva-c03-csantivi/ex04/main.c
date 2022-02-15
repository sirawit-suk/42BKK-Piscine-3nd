#include<stdio.h>
#include<strings.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "abc def ghi jkl mno pqr stu vwxyz";
	char to_find[] = "mno pqr";


	printf("\nREAL  :%s\n",strstr(str, to_find));
	printf("COPPY :%s\n\n",ft_strstr(str, to_find));
}
