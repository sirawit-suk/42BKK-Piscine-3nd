#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char *s1 = "goose";
	char *s2 = "good!";
	int i = strncmp(s1, s2, 4);

	printf("Using strncmp\n");
	printf("%d\n", i);
	printf("Using ft_strncmp\n");
	i = ft_strncmp(s1, s2, 4);
	printf("%d\n", i);
}
