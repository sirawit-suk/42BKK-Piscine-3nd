/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:17:34 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/24 15:05:00 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//6k - 1, 6k + 1 algorithm to find prime number
int	recursive(int num, long int divider, int increment, int mode)
{
	if (divider * divider > num)
		return (1);
	if (num % divider == 0)
		return (0);
	if (divider == 2)
		return (recursive(num, divider + 1, increment, mode));
	if (mode == 0)
		return (recursive(num, (6 * (increment + 1)) - 1, increment + 1, 1));
	return (recursive(num, (6 * increment) + 1, increment, 0));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (recursive(nb, 2, 0, 0));
}
