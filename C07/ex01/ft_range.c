/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:31:56 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/16 18:33:23 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	tbl_len;
	int		*res;
	int		i;

	i = 0;
	tbl_len = max - min;
	if (tbl_len <= 0)
		return (0);
	res = (int *) malloc(tbl_len * sizeof(int));
	while (i < tbl_len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
