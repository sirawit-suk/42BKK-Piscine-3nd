#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void printf_array(int *tab, int size)
{
	for(int i=0; i<size;i++)
	{
		printf("%d, ",*tab);
		tab++;
	}
	printf("\n");
}


int main()
{
	int number_array[5] = {4,3,2,1,0};
	ft_sort_int_tab(number_array, 5);
	printf_array(number_array, 5);

	int number_array1[6] = {2,4,5,1,2,3};
	ft_sort_int_tab(number_array1, 6);
	printf_array(number_array1, 6);

	int number_array2[7] = {0,10,5,9000,30000,40000,8000};
	ft_sort_int_tab(number_array2, 7);
	printf_array(number_array2, 7);

	int number_array3[8] = {0,-111,-222,333,444,555,666,777};
	ft_sort_int_tab(number_array3, 8);
	printf_array(number_array3, 8);
	
	int number_array4[20] = {20,19,18,1,5,10,15,19,3,8,5,4,3,2,8,8,3,2,9,1};
	ft_sort_int_tab(number_array4, 20);
	printf_array(number_array4, 20);

}
