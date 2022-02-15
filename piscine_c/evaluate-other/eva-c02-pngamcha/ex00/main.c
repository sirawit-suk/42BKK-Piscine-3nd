/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:21:45 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 22:34:58 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "This is source1234567890";
	char	dest[] = "This";

	printf("This is before copy : %s\n", dest);
	ft_strcpy(dest, src);
	printf("This is after copy : %s\n", dest);
}
