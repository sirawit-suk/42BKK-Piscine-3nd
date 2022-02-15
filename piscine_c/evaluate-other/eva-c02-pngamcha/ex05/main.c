/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:11:58 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/18 19:37:15 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	char1[] = "ThisStringIsContain21321nlyAlphabet";
	char	char2[] = "ABCDEF";
	char	char3[] = "";

	printf("%s : %d\n", char1, ft_str_is_uppercase(char1));
	printf("%s : %d\n", char2, ft_str_is_uppercase(char2));
	printf("Empty String : %d\n", ft_str_is_uppercase(char3));
}
