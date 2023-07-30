/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:35:06 by event             #+#    #+#             */
/*   Updated: 2023/07/11 17:05:41 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charlowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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

char	*ft_strcapitalize(char *str)
{
	int		count;

	str = ft_strlowcase(str);
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a'
			&& str[count] <= 'z'
			&& (count == 0
				|| !(ft_char_is_alpha(str[count - 1])
					|| ft_char_is_numeric(str[count - 1]))))
		{
			str[count] -= 32;
		}
		count++;
	}	
	return (str);
}
