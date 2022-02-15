/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:50:07 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/18 01:50:24 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char str1[100];
	char str2[] = "Hello there, Venus";
	int x1 = ft_strlcpy(str1, str2, 18);
	printf("%s<=%s len=%d", str1, str2, x1);
}
