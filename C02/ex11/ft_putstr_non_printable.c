/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:26:30 by event             #+#    #+#             */
/*   Updated: 2023/07/11 18:01:53 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		compteur;
	char	letter;
	char	tmp;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		letter = str[compteur];
		if (letter <= 31 || letter == 127)
		{
			tmp = 92;
			write (1, &tmp, 1);
			tmp = letter / 16 + '0';
			letter = letter % 16;
			write (1, &tmp, 1);
			if (letter < 10)
				letter += '0';
			else
				letter = letter - 10 + 'a';
			write (1, &letter, 1);
		}
		else
			write (1, &str[compteur], 1);
		compteur++;
	}
}
