#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
	
	for (int i=-5; i<100; i++)
	{
		printf("%d %d\n",i, ft_is_prime(i));
	}
	printf("%d\n", ft_is_prime(479001599));
	printf("%d\n", ft_is_prime(1600000000));
	printf("%d\n", ft_is_prime(2025000000));
	printf("%d\n", ft_is_prime(2116000000));
	printf("%d\n", ft_is_prime(2147483647));
}
