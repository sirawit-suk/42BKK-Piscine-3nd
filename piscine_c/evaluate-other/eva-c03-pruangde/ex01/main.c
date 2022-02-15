#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[50] = "AbCdEf";
	char	s2[50] = "ABCDEF";
	char	s3[50] = "ABCDEF";
	char	s4[50] = "ABCDEFGHI";
	unsigned int	num = 5;

	printf("s1 s2 = %d\n", ft_strncmp(s1,s2,num));
	printf("s2 s3 = %d\n", ft_strncmp(s2,s3,num));
	printf("s3 s4 = %d\n", ft_strncmp(s3,s4,num));
	return (0);
}
