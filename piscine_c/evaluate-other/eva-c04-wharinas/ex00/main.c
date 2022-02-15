/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:58:13 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/25 13:01:58 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);
void	print_test(char *str);

int	main(void)
{
	print_test("");
	print_test("abcdefg&123124");	
	return (0);
}


void	print_test(char *str)
{
	printf("intpu(\"%s\")\n - strlen return: %lu\n - ft_strlen return: %d\n", str, strlen(str), ft_strlen(str));
}
