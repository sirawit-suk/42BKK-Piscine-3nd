#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[100] = "abcdefg";
	char	s2[50] = "hijklmnopq";

	printf("result = %s", ft_strcat(s1,s2));
	return (0);
}
