#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d\n",ft_strncmp("abc","abc",5));
	printf("%d\n",ft_strncmp("abC","abc",5));
	printf("%d\n",ft_strncmp("abc","abC",5));
	printf("%d\n",ft_strncmp("abc","abcc",5));
	printf("%d\n",ft_strncmp("abcc","abc",5));
	printf("%d\n",ft_strncmp("abcx","abcX",5));
}
