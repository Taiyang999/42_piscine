/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:27:32 by event             #+#    #+#             */
/*   Updated: 2023/07/06 16:18:17 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	display_value;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			display_value = (a / 10) + 48;
			write(1, &display_value, 1);
			display_value = (a % 10) + 48;
			write(1, &display_value, 1);
			write(1, " ", 1);
			display_value = (b / 10) + 48;
			write(1, &display_value, 1);
			display_value = (b % 10) + 48;
			write(1, &display_value, 1);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
