/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:06:45 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/24 15:24:44 by ssukwatt         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (recursive(nb, 2, 0, 0) == 0)
	{
		nb++;
	}
	return (nb);
}
