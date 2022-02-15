#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *dest, char *src);

int	main()
{
	char s1[] = "opal is a girl";
	char s2[] = "opal";
	char *s3 = strstr(s1, s2);

	printf("Using strncat\n");
	printf("%s\n", s3);

	char s4[] = "opal is a girl";
	char s5[] = "opal";
	char *s6 = ft_strstr(s4, s5);
	printf("Using ft_strncat\n");
	printf("%s\n", s6);
}

