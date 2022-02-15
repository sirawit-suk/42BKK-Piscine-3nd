#include <stdio.h>

int ft_strlen(char *str);

int main ()
{
	printf("%d\n",ft_strlen(""));
	printf("%d\n",ft_strlen("1"));
	printf("%d\n",ft_strlen("ab"));
	printf("%d\n",ft_strlen("abc"));
	printf("%d\n",ft_strlen("abcd"));
	printf("%d\n",ft_strlen("abca!"));
}
