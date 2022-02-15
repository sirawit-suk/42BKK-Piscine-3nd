#include<stdio.h>
#include<strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("\n REAL :%d\n", strncmp("abcde", "abcde", 3));
	printf("COPPY :%d\n\n", ft_strncmp("abcde", "abcde", 3));

	printf(" REAL :%d\n", strncmp("US", "aa", 2));
	printf("COPPY :%d\n\n", ft_strncmp("US", "aa", 2));     //  1

	printf(" REAL :%d\n", strncmp("cat", "bat", 2));
	printf("COPPY :%d\n\n", ft_strncmp("cat", "bat", 2));   // 1

	printf(" REAL :%d\n", strncmp("js", "java", 4));
	printf("COPPY :%d\n\n", ft_strncmp("js", "java", 4));   // 1

	printf(" REAL :%d\n", strncmp("marcus", "marcuscode", 4));
	printf("COPPY :%d\n\n", ft_strncmp("marcus", "marcuscode", 4)); // -1

	printf(" REAL :%d\n", strncmp("i", "", 1));// -1
	printf("COPPY :%d\n\n", ft_strncmp("i", "", 1));   // -1
	return 0;
}
