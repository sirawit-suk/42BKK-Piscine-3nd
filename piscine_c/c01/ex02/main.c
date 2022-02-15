#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int num1 = 100;
	int num2 = 200;

	printf("Before %d %d\n",num1, num2);
	ft_swap(&num1, &num2);
	printf("After %d %d\n",num1, num2);

	num1 = -10;
	num2 = -5;
	printf("Before %d %d\n",num1, num2);
	ft_swap(&num1, &num2);
	printf("After %d %d\n",num1, num2);

	num1 = 123;
	num2 = -456;
	printf("Before %d %d\n",num1, num2);
	ft_swap(&num1, &num2);
	printf("After %d %d\n",num1, num2);

}
