/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:55:34 by event             #+#    #+#             */
/*   Updated: 2023/07/11 16:14:29 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_charupcase(str[count]) == 1)
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
