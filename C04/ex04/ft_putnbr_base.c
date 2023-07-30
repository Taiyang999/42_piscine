/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:56:42 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/13 17:46:30 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[j] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	char	dspl;
	int		base_len;
	int		a;
	int		b;
	int		compteur;

	base_len = ft_strlen(base);
	if (!base_error(base))
	{
		a = 1;
		compteur = nbrlength(nbr);
		while (compteur > 0)
		{
			a *= base_len;
			compteur --;
		}
		while (a > 0)
		{
			b = nbr / a;
			nbr -= (a * b);
			a /= base_len;
			dspl = base[absolute_int(b)];
			write (1, &dspl, 1);
		}
	}
}
