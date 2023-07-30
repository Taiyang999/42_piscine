/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:20:19 by event             #+#    #+#             */
/*   Updated: 2023/07/06 19:54:05 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	midsize;
	int	compteur;

	compteur = 0;
	midsize = size / 2;
	while (compteur < midsize)
	{
		ft_swap(&tab[compteur], &tab[size - compteur -1]);
		compteur++;
	}
}
