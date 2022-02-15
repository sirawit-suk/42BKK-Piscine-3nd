#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *result;
	char *c1 = "1";
	char *c2 = "2";
	char *c3 = "3";
	char **ptr;
	ptr = malloc(sizeof(char *) * 3);
	ptr[0] = c1;
	ptr[1] = c2;
	ptr[2] = c3;
	
	//for (int i=0; i < 3; i++)
	//	printf("%s\n", ptr[i]);
	result = ft_strjoin(3, ptr , "----");
	printf("%s\n", result);
	free(result);
	free(ptr);
}
