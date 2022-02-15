/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:48:09 by wharinas          #+#    #+#             */
/*   Updated: 2022/01/19 13:45:48 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char a[] = "Tesing by Mawin.";
	printf("Case: %s\n(f): %d\nstrlen: %lu", a, ft_strlen(a), strlen(a));
}
