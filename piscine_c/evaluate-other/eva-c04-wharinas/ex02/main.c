/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:09:34 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/26 18:49:52 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-321321);
	
	printf("\n");
	ft_putnbr(1234);
	printf("\n");
	ft_putnbr(01234);
	printf("\n");
	ft_putnbr(+0);
	printf("\n");
	ft_putnbr(-0);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	
	ft_putnbr(-89554726);
	printf("\n");
	ft_putnbr(-63688353);
	printf("\n");
	ft_putnbr(-196749551);
	printf("\n");

	return (0);
	
}
