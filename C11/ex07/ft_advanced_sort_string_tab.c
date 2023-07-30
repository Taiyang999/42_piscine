/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:12:17 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/27 22:19:43 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	cmp_res;
	int	end;

	i = 2;
	while (tab[i])
	{
		j = i;
		end = 0;
		while (j > 1 && end == 0)
		{
			cmp_res = (*cmp)(tab[j], tab[j - 1]);
			if (cmp_res < 0)
				ft_swap(&tab[j - 1], &tab[j]);
			else
				end = 1;
			j--;
		}
		i++;
	}
}
