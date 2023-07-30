/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:52:32 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/13 17:43:53 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nbrlength(int n)
{
	int	res;

	res = 0;
	if (n >= 0)
	{
		while (n >= 10)
		{
			n = n / 10;
			res ++;
		}
	}
	else
	{
		write (1, "-", 1);
		while (n <= -10)
		{
			n = n / 10;
			res ++;
		}
	}
	return (res);
}

int	absolute_int(int nb)
{
	if (nb >= 0)
		return (nb);
	else
		return (-nb);
}

void	ft_putnbr(int nb)
{
	int		a;
	int		b;
	int		compteur;
	char	dspl;

	a = 1;
	compteur = nbrlength(nb);
	while (compteur > 0)
	{
		a *= 10;
		compteur --;
	}
	while (a > 0)
	{
		b = nb / a;
		nb -= (a * b);
		a /= 10;
		dspl = absolute_int(b) + '0';
		write (1, &dspl, 1);
	}
}
