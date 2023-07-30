/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:03:07 by event             #+#    #+#             */
/*   Updated: 2023/07/10 15:59:04 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charlowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_charlowercase(str[count]) == 1)
			str[count] = str[count] + 32;
		count++;
	}
	return (str);
}
