/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:53:08 by hehuang           #+#    #+#             */
/*   Updated: 2023/07/26 00:47:31 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_len(char *str, int index, char *charset)
{
	int	i;

	i = 0;
	while (!is_sep(str[index + i], charset))
		i++;
	return (i);
}

char	*get_word_by_index(char *str, int index, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		res[i] = str[index + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		if (is_sep(str[i], charset) && in_word)
			in_word = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		in_word;

	i = 0;
	j = 0;
	in_word = 0;
	res = (char **) malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset) && !in_word)
		{
			res[j] = get_word_by_index(str, i, word_len(str, i, charset));
			in_word = 1;
			j++;
		}
		if (is_sep(str[i], charset) && in_word)
			in_word = 0;
		i++;
	}
	res[j] = 0;
	return (res);
}
