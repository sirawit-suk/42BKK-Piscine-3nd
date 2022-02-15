/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 02:33:27 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[10];
	int		i;
	int		n;

	src = (char *)malloc(sizeof(char) * 7);
	i = 0;
	while (i < 6)
	{
		src[i] = 'A' + i;
		i++;
	}
	n = 4;
	printf("n = %d\n", n);
	printf("src = %s\n", src);
	printf("dest = %s\n", ft_strncpy(dest, src, n));
	return (0);
}
