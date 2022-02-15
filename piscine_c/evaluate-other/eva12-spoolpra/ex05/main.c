#include <stdio.h>
#include <string.h>

int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char s1[100] = "poPGTAfWlxscHCpvBJRIuVVMqoUffipgTwKiwQwMpn";
	char s2[] = "TElXeeIhmtSMAVRZANZpTZswFRKwchAazmvb";
	int i = strlcat(s1, s2, 20);

	printf("Using strncat\n");
	printf("%d\n", i);
	printf("%s\n", s1);

	char s4[100] = "poPGTAfWlxscHCpvBJRIuVVMqoUffipgTwKiwQwMpn";
	char s5[] = "TElXeeIhmtSMAVRZANZpTZswFRKwchAazmvb";
	int j = ft_strlcat(s4, s5, 20);
	printf("Using ft_strncat\n");
	printf("%d\n", j);
	printf("%s\n", s4);
}
