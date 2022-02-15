/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:05:14 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 19:59:41 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	//ft_putnbr_base(873266948, "0123456789ABCDEF"); //340CFF04
	ft_putnbr_base(-873266948, "0123456789ABCDEF"); //340CFF04
	printf("\n-----\n");
	ft_putnbr_base(-873266948, "01234569+ABCDEF"); //340CFF04
	printf("\n-----\n");
	ft_putnbr_base(-873266948, "1"); //340CFF04
	printf("\n-----\n");
}
