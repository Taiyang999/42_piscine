/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:05:43 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/13 17:34:45 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
		count ++;
	return (s1[count] - s2[count]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_param_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	cmp_res;
	int	end;

	i = 2;
	while (i < size)
	{
		j = i;
		end = 0;
		while (j > 1 && end == 0)
		{
			cmp_res = ft_strcmp(tab[j], tab[j - 1]);
			if (cmp_res < 0)
				ft_swap(&tab[j - 1], &tab[j]);
			else
				end = 1;
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*param;
	int		i;

	i = 1;
	ft_sort_param_tab(argv, argc);
	while (i < argc)
	{
		param = argv[i];
		ft_putstr(param);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
