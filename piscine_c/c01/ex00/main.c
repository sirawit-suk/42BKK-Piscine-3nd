#include <unistd.h>

void ft_ft(int *nbr);

int main()
{
	int a = 100;
	int *p = &a;

	ft_ft(&a);
	
	char ch1 = *p/10 + '0';
	char ch2 = *p%10 + '0';

	write(1, &ch1, 1);
	write(1, &ch2, 1);
}
