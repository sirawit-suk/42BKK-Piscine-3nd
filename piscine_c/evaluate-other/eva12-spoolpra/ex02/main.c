#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char s1[5] = "nZ";
	char s2[20] = "NrpwKXyzWXr";
	strcat(s1, s2);

	printf("Using strcat\n");
	printf("%s\n", s1);

	char s3[20] = "nZ";
	char s4[20] = "NrpwKXyzWXr";
	char *r2 = ft_strcat(s3, s4);
	printf("Using ft_strcat\n");
	printf("%s\n", s3);
	printf("%s\n", r2);
}

