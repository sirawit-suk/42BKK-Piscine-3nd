#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main()
{
	char str1[] = "Bonjour les aminches\n\n\nc  est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\rlol\rlol\r ";
	void *v = str1;

	//v = ft_print_memory(v, 0);
	//printf("\n");
	//v = ft_print_memory(v, 16);
	//printf("\n");
	//v = ft_print_memory(v, 32);
	//printf("\n");
	v = ft_print_memory(v, 92);
	printf("\n");
}
