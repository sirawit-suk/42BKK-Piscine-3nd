/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:56:11 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/17 21:01:30 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	parameter;

	parameter = 12;
	ft_ft(&parameter);
	printf("%d", parameter);
	return (0);
}
