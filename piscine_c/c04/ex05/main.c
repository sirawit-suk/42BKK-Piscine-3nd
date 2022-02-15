#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main ()
{
	printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
	printf("%d\n", ft_atoi_base("                --++--555abc123", "0123456789"));
	printf("%d\n", ft_atoi_base("  ---000123", "0123456789"));
	printf("%d\n", ft_atoi_base("-!@#--000123", "0123456789"));
	printf("%d\n", ft_atoi_base("12  ---000123", "0123456789"));
	printf("%d\n", ft_atoi_base("","0123456789"));
	printf("%d\n", ft_atoi_base("----+-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("  --+--2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("219", "0123456789ABCDEF")); //219
	printf("%d\n", ft_atoi_base("756B61F", "0123456789ABCDEF")); //756B61F
	printf("%d\n", ft_atoi_base("123", "0123456789")); //123
	printf("%d\n", ft_atoi_base("1111111111111111111111111111111", "01")); //1111111111111111111111111111111
	printf("%d\n", ft_atoi_base("7FFFFFFF", "0123456789ABCDEF")); //7FFFFFFF
	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF")); //-80000000
	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01")); //-10000000000000000000000000000000
	printf("error0:%d\n", ft_atoi_base("-2147483648", "1")); // error case
	printf("error0:%d\n", ft_atoi_base("-2147483648", "012345567")); // error case
	printf("error0:%d\n", ft_atoi_base("-2147483648", "01234-")); // error case
	printf("error0:%d\n", ft_atoi_base("1234", "abcde")); // error case
}
