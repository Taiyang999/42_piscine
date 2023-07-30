/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:52:04 by event             #+#    #+#             */
/*   Updated: 2023/07/09 15:33:21 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		write (1, &str[compteur], 1);
		compteur++;
	}
}