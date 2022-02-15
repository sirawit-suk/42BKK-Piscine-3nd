/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:22:48 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/19 16:58:47 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	lex_diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		lex_diff = s1[i] - s2[i];
		if (lex_diff)
			return (lex_diff);
		i++;
	}
	lex_diff = s1[i] - s2[i];
	return (lex_diff);
}
