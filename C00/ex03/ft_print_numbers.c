/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:16:00 by event             #+#    #+#             */
/*   Updated: 2023/07/05 15:58:02 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	zero_ascii;

	zero_ascii = '0';
	while (zero_ascii <= '9')
	{
		write(1, &zero_ascii, 1);
		zero_ascii++;
	}
}
