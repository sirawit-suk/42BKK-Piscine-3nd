/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:40:40 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 22:41:51 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str1[50] = "ABCD";
	char str2[50] = "1234";
	ft_strncat(str1, str2, 4);
	printf("%s\n", str1);
}	
