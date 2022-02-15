#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int num1 = 100;
	int num2 = 200;

	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);
	
	num1 = 2; num2 = 5;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);
	
	num1 = 5; num2 = 2;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);
	
	num1 = 10; num2 = 7;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);

	num1 = -5; num2 = 7;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);

	num1 = 12; num2 = -9;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);

	num1 = -8; num2 = -5;
	printf("Before %d %d\n",num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("After %d r= %d\n\n",num1, num2);

}
