/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:38:46 by event             #+#    #+#             */
/*   Updated: 2023/07/06 22:59:58 by event            ###   ########.fr       */
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
		dspl = absolute_int(b) + 48;
		write (1, &dspl, 1);
	}
}
