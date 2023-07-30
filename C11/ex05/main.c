/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:48:23 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/27 01:56:45 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	neg;
	int	i;
	int	res;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * neg);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb;
		c += '0';
		write(1, &c, 1);
	}
}

int	not_operator(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i > 0)
			return (0);
		else if (str[i] != '+' || str[i] != '-'
			|| str[i] != '*' || str[i] != '/'
			|| str[i] != '%')
			return (0);
		i++;
	}
	return (1);
}

int	ft_op(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else
		return (a % b);
}

int	main(int argc, char **argv)
{
	int	n2;

	if (argc == 4)
	{
		if (not_operator(argv[2]))
			write(1, "0", 1);
		else
		{
			n2 = ft_atoi(argv[3]);
			if (argv[2][0] == '%' && n2 == 0)
				write(1, "Stop : modulo by zero", 21);
			else if (argv[2][0] == '/' && n2 == 0)
				write(1, "Stop : division by zero", 23);
			else
			{
				ft_putnbr(ft_op(ft_atoi(argv[1]), n2, argv[2][0]));
			}
		}
	}
	return (0);
}
