#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main()
{
	int *array;

	array = ft_range(-3, 5);
	for(int i=0; i< 8 ; i++)
		printf("%d\n", array[i]);
	free(array);
	
	array = ft_range(0, 10);
	for(int i=0; i< 10 ; i++)
		printf("%d\n", array[i]);
	free(array);
	
	array = ft_range(-10, -5);
	for(int i=0; i< 5 ; i++)
		printf("%d\n", array[i]);
	free(array);
	
	array = ft_range(10, 5);
	if (array == 0)
		printf("null pointer return");
	free(array);
}
