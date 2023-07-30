/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:30:07 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/19 16:28:50 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	res = (char *) malloc((src_len + 1) * sizeof(char));
	while (i < src_len)
	{
		res[i] = src [i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	i = 0;
	res = (struct s_stock_str *) malloc((ac + 1) * sizeof(struct s_stock_str));
	if (res == 0)
		return (NULL);
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].size = ft_strlen(av[i]);
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
