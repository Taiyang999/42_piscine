/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:00:04 by event             #+#    #+#             */
/*   Updated: 2023/07/09 15:34:10 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	compteur;
	int	compteur2;

	compteur = 1;
	while (compteur < size)
	{
		compteur2 = compteur;
		while (compteur2 > 0 && tab[compteur2 -1] > tab[compteur2])
		{
			ft_swap(&tab[compteur2 - 1], &tab[compteur2]);
			compteur2 --;
		}
		compteur ++;
	}
}
