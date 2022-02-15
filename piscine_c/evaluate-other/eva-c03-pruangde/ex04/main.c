#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[100] = "ABCDEFG1234567890HIJKLMNOP";
	char	s2[10] = "OPASD";
	char	s3[10] = "";
	char	s4[10] = "xyz";

	printf("string = %s\nfind   = %s\n", s1, s2);
	printf("result = %s\n", ft_strstr(s1,s2));
	printf("------------------------------------------------\n");
	printf("string = %s\nfind   = %s\n", s1,s3);
	printf("result = %s\n",ft_strstr(s1,s3));
	printf("------------------------------------------------\n");
	printf("string = %s\nfind   = %s\n", s1,s4);
	printf("result = %s\n",ft_strstr(s1,s4));
	return (0);
}
