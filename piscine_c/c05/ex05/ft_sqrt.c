/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:19:20 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/23 23:16:01 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Binary Search
int	recursive(int num, long int value, int min, int max)
{
	if (min >= max)
		return (0);
	if (value * value > num)
		return (recursive(num, (max + min + 1) / 2, min, value - 1));
	if (value * value < num)
		return (recursive(num, (max + min + 1) / 2, value, max));
	if (value * value == num)
		return (value);
	return (-1);
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (recursive(nb, nb / 2, 0, nb));
}
