#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest,char *src, unsigned int size);

int main()
{
	char dest[50] = "Hello World,";
	char src[50] = " I'm 42Bangkok Pisciner.";
	unsigned int size = 15;

	//char destn[50] = "1234567890";
	//char srcn[50] = "1234567890";
	//unsigned int sizen = 5;
	
	char dest1[50] ="Hello World,";
	char src1[50] = " I'm 42Bangkok Pisciner.";

	printf("\n REAL :%lu\n", strlcat(dest1, src1, size));
	printf("COPPY :%u\n\n", ft_strlcat(dest, src, size));
}
