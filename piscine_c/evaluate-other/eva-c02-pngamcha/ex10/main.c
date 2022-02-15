/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:59:49 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 19:06:52 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "This is the source string.";
	char dest[] = "This is the destination.$$";
	char src1[] = "This is the source string.";
	char dest1[] = "This is the destination.$$";
	unsigned int size = 26;

	printf("%u\n", ft_strlcpy(dest, src, size));
	printf("Source : %s\n", src);
	printf("Dest : %s\n", dest);
	printf("Correct %lu\n", strlcpy(dest1, src1, size));
	printf("Correct Source : %s\n", src1);
	printf("Correct Dest : %s\n", dest1);
}
