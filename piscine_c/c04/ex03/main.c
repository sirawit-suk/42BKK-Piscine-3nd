#include <stdio.h>

int	ft_atoi(char *str);

int main ()
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("                --++--555abc123"));
	printf("%d\n", ft_atoi("  ---000123"));
	printf("%d\n", ft_atoi("-!@#--000123"));
	printf("%d\n", ft_atoi("12  ---000123"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("---000"));
	printf("%d\n", ft_atoi("+-+-----+++++175074925\r\v"));
	printf("%d\n", ft_atoi("----+-2147483648"));
	printf("%d\n", ft_atoi("----+-2147483648"));
	printf("%d\n", ft_atoi("  --+--2147483647"));
}
