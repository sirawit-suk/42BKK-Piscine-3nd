/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:08:50 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/28 00:11:20 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char src[1000] = "teststring";
	char dest[1000] = "aaaaaaa";
	char src1[1000] = "teststring";
	char dest1[1000] = "aaaaaaa";
	int n = 30;
	strncat(dest,src,n);
	printf("dest: %s src: %s\n",dest,src);
	ft_strncat(dest1,src1,n);
	printf("dest1: %s src1: %s\n",dest1,src1);
}
