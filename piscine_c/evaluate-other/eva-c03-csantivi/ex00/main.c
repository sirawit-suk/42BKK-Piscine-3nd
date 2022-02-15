#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	printf("\n REAL :%d\n", strcmp("a", "a"));
	printf("COPPY :%d\n\n", ft_strcmp("a", "a"));       // 0
	
	printf(" REAL :%d\n", strcmp("US", "UK"));
	printf("COPPY :%d\n\n", ft_strcmp("US", "UK"));     //  1
	
	printf(" REAL :%d\n", strcmp("cat", "bat"));
	printf("COPPY :%d\n\n", ft_strcmp("cat", "bat"));   // 1
	
	printf(" REAL :%d\n", strcmp("js", "java"));
	printf("COPPY :%d\n\n", ft_strcmp("js", "java"));   // 1
	
	printf(" REAL :%d\n", strcmp("marcus", "marcuscode"));
	printf("COPPY :%d\n\n", ft_strcmp("marcus", "marcuscode")); // -1
	
	printf(" REAL :%d\n", strcmp("i", ""));       // -1
	printf("COPPY :%d\n\n", ft_strcmp("i", ""));   // -1
	return 0;
}
