/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:39:01 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/16 16:13:05 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

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
	int number_array[9] = {0,1,2,3,4,5,6,7,8};
	ft_rev_int_tab(number_array, 9);
	printf_array(number_array, 9);

	int number_array1[6] = {0,1,2,3,4,5};
	ft_rev_int_tab(number_array1, 6);
	printf_array(number_array1, 6);

	int number_array2[7] = {0,100,200,-1,40000,-1,6000};
	ft_rev_int_tab(number_array2, 7);
	printf_array(number_array2, 7);

	int number_array3[8] = {0,-111,-222,333,444,555,666,777};
	ft_rev_int_tab(number_array3, 8);
	printf_array(number_array3, 8);
}
