#include<strings.h>
#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[50] = "Hello World,";
	char src[50] = " I'm 42Bangkok Pisciner.";
	unsigned int nb = 4;

	char dest1[50] = "Hello World,";
	char src1[50] = " I'm 42Bangkok Pisciner.";

	strncat(dest1, src1, nb);
	printf("\n REAL :%s\n",dest1);
	
	ft_strncat(dest, src, nb);
	printf("COPPY :%s\n\n",dest);
}
