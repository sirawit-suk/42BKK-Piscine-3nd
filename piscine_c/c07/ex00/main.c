#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main()
{
	char *ptr;
	char *str = "sirawit sukwattanavit";
	
	ptr = ft_strdup(str);
	printf("%s", ptr);
	free(ptr);
}
