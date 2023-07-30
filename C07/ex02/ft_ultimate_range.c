/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:05:09 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/16 19:58:50 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tbl_len;
	int	*res;
	int	i;

	i = 0;
	tbl_len = max - min;
	if (tbl_len <= 0)
	{
		range[0] = NULL;
		return (0);
	}
	res = (int *) malloc(tbl_len * sizeof(int));
	while (i < tbl_len)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (i);
}
