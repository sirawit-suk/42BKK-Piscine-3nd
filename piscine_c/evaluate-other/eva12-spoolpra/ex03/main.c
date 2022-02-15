#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char s1[100] = "ZEZ";
	char s2[] = "pQAamXtYHuwnSJLWmgvUH";
	strncat(s1, s2, 10);

	printf("Using strncat\n");
	printf("%s\n", s1);

	char s3[100] = "ZEZ";
	char s4[] = "pQAamXtYHuwnSJLWmgvUH";
	char *r2 = strncat(s3, s4, 10);
	printf("Using ft_strncat\n");
	printf("%s\n", s3);
	printf("%s\n", r2);
}

