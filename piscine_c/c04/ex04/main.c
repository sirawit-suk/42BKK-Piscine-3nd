#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	ft_putnbr_base(537, "0123456789ABCDEF"); //219
	printf("\n");
	ft_putnbr_base(123123231, "0123456789ABCDEF"); //756B61F
	printf("\n");
	ft_putnbr_base(123, "0123456789"); //123
	printf("\n");
	ft_putnbr_base(0, "0123456789"); //123
	printf("\n");
	ft_putnbr_base(2147483647, "01"); //1111111111111111111111111111111
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF"); //7FFFFFFF
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF"); //-80000000
	printf("\n");
	ft_putnbr_base(-2147483648, "01"); //-10000000000000000000000000000000
	printf("\nerror:");
	ft_putnbr_base(-2147483648, "1"); // error case
	printf("\nerror:");
	ft_putnbr_base(-2147483648, "012345567"); // error case
	printf("\nerror:");
	ft_putnbr_base(-2147483648, "01234-"); // error case
	printf("\n");
}
