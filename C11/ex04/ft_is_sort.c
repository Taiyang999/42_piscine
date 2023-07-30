/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:15:31 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/27 00:41:45 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	test;

	i = 0;
	test = 0;
	if (length > 1)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				test++;
			else
				test--;
			i++;
		}
	}
	if (test == length - 1 || test == -length + 1)
		return (1);
	return (0);
}
