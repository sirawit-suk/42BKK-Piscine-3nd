/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:11:58 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/18 20:25:20 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	char1[] = "ThisStringIsContain21321nlyAlphabet";
	char	char2[] = "abcdefg";
	char	char3[] = "";

	printf("1. %s\n", char1);
	printf(" %s\n", ft_strupcase(char1));
	printf("2. %s\n", char2);
	printf(" %s\n", ft_strupcase(char2));
	printf("Empty String : %s\n", ft_strupcase(char3));
}
