/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:55:50 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/12 18:51:41 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count] && count < n)
		count ++;
	return (s1[count] - s2[count]);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	tf_len;

	tf_len = ft_strlen(to_find);
	if (tf_len == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, tf_len))
			return (str);
		str++;
	}
	return (0);
}
