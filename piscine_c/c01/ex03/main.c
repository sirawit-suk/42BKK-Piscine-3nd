#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int num1 = 100;
	int num2 = 200;
	int div = 0;
	int r = 0;

	printf("Before %d %d %d %d\n",num1, num2, div, r);
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);
	
	num1 = 2; num2 = 5;
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);
	
	num1 = 5; num2 = 2;
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);
	
	num1 = 10; num2 = 7;
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);

	num1 = -5; num2 = 7; // -5 = 7*(-1) +2 
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);

	num1 = 12; num2 = -9; // 12 = -9*(-2) -6 
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);

	num1 = -8; num2 = -5; // -8 = -5*(1) -3 
	ft_div_mod(num1, num2, &div, &r);
	printf("After %d / %d = %d r=%d\n",num1, num2, div, r);

}
