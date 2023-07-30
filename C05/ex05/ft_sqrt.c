/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:29:49 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/13 21:39:15 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	test;

	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i < nb)
	{
		test = i * i;
		if (test == nb)
			return (i);
		else if (test > nb)
			return (0);
		i++;
	}
	return (0);
}
