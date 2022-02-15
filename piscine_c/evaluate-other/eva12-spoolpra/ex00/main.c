#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char *s1 = "Zac";
	char *s2 = "abc";
	int i = strcmp(s1, s2);

	printf("Using strcmp\n");
	printf("%d\n", i);
	printf("Using ft_strcmp\n");
	printf("%d\n", ft_strcmp(s1, s2));
}
