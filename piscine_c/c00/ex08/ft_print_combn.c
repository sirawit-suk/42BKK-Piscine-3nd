/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:04:35 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/13 20:32:20 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	int		digit[n];
	char	temp_char;

	while(n != -1)
	{
		digit[n-1] = 0;
		temp_char = digit[n-1]+'0';
		write(1, &temp_char, 1);
		n--;
	}	
}
