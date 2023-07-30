/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:06:47 by event             #+#    #+#             */
/*   Updated: 2023/07/10 18:25:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;
	int	fin;

	count = 0;
	fin = 0;
	while (count < (int)n)
	{
		if (src[count] == '\0')
			fin = 1;
		if (fin == 0)
			dest[count] = src[count];
		else
			dest[count] = '\0';
		count++;
	}
	return (dest);
}
