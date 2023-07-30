/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:41:26 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/13 16:12:38 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	char	*param;
	int		i;

	i = 1;
	while (i < argc)
	{
		param = argv[i];
		ft_putstr(param);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
