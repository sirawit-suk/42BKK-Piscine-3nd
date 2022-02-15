#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[100] = "ABCDEFG";
	char	s2[50] = "0123456789";
	unsigned int	nb = 5;

	printf("result = %s", ft_strncat(s1, s2, nb));
	return (0);
}
