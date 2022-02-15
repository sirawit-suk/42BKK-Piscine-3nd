/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:21:45 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 17:34:53 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "This is source";
	char	dest[] = "This is destination";

	printf("This is before copy : %s\n", dest);
	ft_strncpy(dest, src, 10);
	printf("This is after copy : %s\n", dest);
}
