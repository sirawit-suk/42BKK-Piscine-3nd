/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:22:48 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/19 17:47:26 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				lex_diff;
	unsigned int	i;

	i = 0;
	lex_diff = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		lex_diff = s1[i] - s2[i];
		if (lex_diff)
			return (lex_diff);
		i++;
	}
	if (i < n)
		lex_diff = s1[i] - s2[i];
	return (lex_diff);
}
