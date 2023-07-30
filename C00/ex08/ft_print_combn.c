/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:05:49 by event             #+#    #+#             */
/*   Updated: 2023/07/06 16:19:53 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nbrlength(int n)
{
	int	res;

	res = 0;
	while (n >= 10)
	{
		n = n / 10;
		res ++;
	}
	return (res);
}

int	ft_findlastnb(int n)
{
	int	u;
	int	res;
	int	compteur;

	res = 0;
	while (n != 0)
	{
		u = 1;
		compteur = n - 1;
		while (compteur > 0)
		{
			u *= 10;
			compteur --;
		}
		res = res + (u * (10 - n));
		n--;
	}
	return (res);
}

void	ft_putnbr_beta(int nb, int size)
{
	char	dspl;
	int		a;
	int		compteur;
	int		correct_size;

	a = 1;
	correct_size = 0;
	compteur = nbrlength(nb);
	if (size == compteur + 1)
		correct_size = 1;
	while (compteur > 0)
	{
		a *= 10;
		compteur --;
	}
	if (correct_size == 0)
		write(1, "0", 1);
	while (a > 0)
	{
		dspl = (nb / a) + 48;
		nb -= (a * (nb / a));
		a /= 10;
		write (1, &dspl, 1);
	}
}

void	ft_annexe(int base, int left, int size)
{
	int	nx_left;
	int	nx_base_u;
	int	nx_base;
	int	lastnb;

	if (left == 0)
	{
		lastnb = ft_findlastnb(size);
		ft_putnbr_beta(base, size);
		if (lastnb != base)
			write(1, ", ", 2);
	}
	else
	{	
		nx_left = left - 1;
		nx_base_u = base % 10 + 1;
		nx_base = (base * 10) + nx_base_u;
		while (nx_base_u <= 9)
		{
			ft_annexe(nx_base, nx_left, size);
			nx_base_u ++;
			nx_base ++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	a = 0;
	b = 10 - n;
	while (a < 10)
	{
		ft_annexe(a, n - 1, n);
		a++;
	}
}
