/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:04:35 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/13 20:21:45 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//int	recursive_digit(int n, int value)
//{
	//char temp;

	//temp = '0';
	//find base case
	//if(value == -1)
	//{
	//	return 0;
	//}

	//temp = value / n + '0';
	//return
	//return recursive_digit(n, value-1), write(1, &temp, 1);

//}

void	ft_print_combn(int n)
{
	//int xxx[n];
	//int digit_ten = 1;
	char *eiei;
	char x;

	eiei = "wtf";
	x = '0' + n;
	write(1, eiei, 3);
	write(1, &x, 1);
	//xxx[0] = 1;
	//while(n < 0)
	//{
	//	digit_ten = digit_ten * 10;
	//	n--;
	//}
	//printf("KKK %d KKK\n", digit_ten);
	//recursive_digit(digit_ten, 9);	
}
