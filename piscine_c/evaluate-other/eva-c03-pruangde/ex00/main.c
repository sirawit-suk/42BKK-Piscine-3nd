#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[50] = "AbCdEf";
	char	s2[50] = "ABCDEF";
	char	s3[50] = "ABCDEF";
	char	s4[50] = "ABCDEFGHI";

	printf("s1 s2 = %d\n", ft_strcmp(s1,s2));
	printf("s2 s3 = %d\n", ft_strcmp(s2,s3));
	printf("s3 s4 = %d\n", ft_strcmp(s3,s4));
	return (0);
}
