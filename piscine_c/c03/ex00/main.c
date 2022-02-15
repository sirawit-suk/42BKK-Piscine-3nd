#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	printf("%d\n",ft_strcmp("abc","abc"));
	printf("%d\n",ft_strcmp("abC","abc"));
	printf("%d\n",ft_strcmp("abc","abC"));
	printf("%d\n",ft_strcmp("abc","abcc"));
	printf("%d\n",ft_strcmp("abcc","abc"));
	printf("%d\n",ft_strcmp("abcx","abcX"));
}
