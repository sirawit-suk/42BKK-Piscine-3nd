#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "HELLOWORLD";
	char to_find[] = "WORLD";
	char	*result;
	result = ft_strstr(str, to_find);
	printf("%s\n",result);
}
