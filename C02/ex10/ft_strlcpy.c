/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:55:51 by event             #+#    #+#             */
/*   Updated: 2023/07/11 17:40:16 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	res;

	res = 0;
	while (str[res] != '\0')
	{
		res ++;
	}
	return (res);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	end;

	count = 0;
	end = 1;
	if (size > 0)
	{	
		end = 0;
		while (count < size - 1 && end == 0)
		{
			if (end == 0)
				dest[count] = src[count];
			if (src[count] == '\0')
				end = 1;
			count++;
		}
	}
	if (end == 0)
		dest[count] = '\0';
	return (ft_strlen(src));
}
