#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *array;
	int size;

	array = 0;
	size = ft_ultimate_range(&array,2147483647, -2743);
		
	printf("size: %d\n", size);
	if(size != 0)
		for(int i=0; i< size ; i++)
			printf("%d\n", array[i]);

	free(array);
	size = ft_ultimate_range(&array, 0, 10);
	printf("size: %d\n", size);
	for(int i=0; i< size ; i++)
		printf("%d\n", array[i]);

	free(array);
	size = ft_ultimate_range(&array, -10, -5);
	printf("size: %d\n", size);
	for(int i=0; i< size ; i++)
		printf("%d\n", array[i]);
	
	free(array);
	size = ft_ultimate_range(&array, 10, 5);
	printf("Error size: %d", size);

}
