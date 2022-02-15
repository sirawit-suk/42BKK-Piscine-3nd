#include<stdio.h>
#include<string.h>


char	*ft_strcat(char *dest, char *src);

int main()
{
	char dest[50] = "Hello World,";
	char src[] = " I'm 42Bangkok Pisciner.";

	char dest1[50] = "Hello World,";
	char src1[] = " I'm 42Bangkok Pisciner.";

	strcat(dest1, src1);
	printf("\nREAL  : %s\n",dest1);

	ft_strcat(dest, src);
	printf("COPPY : %s\n\n",dest);

	return 0;

}
