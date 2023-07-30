/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:10:40 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/16 18:27:36 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
