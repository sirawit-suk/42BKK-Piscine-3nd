#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	s1[100] = "mamegoma";
	char	s2[10] = "gomao";
	char	s3[10] = "bruhhhhhhh";
	char	s4[20] = "ABCDEFGHIJKLMNOPQRST";

	printf("s1 > s2 : %d\n", ft_strlcat(s1, s2, 100));
	printf("s1 = %s\n", s1);
	printf("-------------------------------------------------\n");
	printf("s3 < s4 : %d\n", ft_strlcat(s3, s4, 10));
	printf("s3 = %s\n", s3);
	return (0);
}
