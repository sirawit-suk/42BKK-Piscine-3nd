#include <unistd.h>

void ft_putnbr(int nb);

void ft_putchar(char c);

void ft_putcharr(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(-42);
	ft_putcharr('\n');
	ft_putnbr(2147483647);
	ft_putcharr('\n');
	ft_putnbr(5678);
	ft_putcharr('\n');
	ft_putnbr(-2147483648);
}
