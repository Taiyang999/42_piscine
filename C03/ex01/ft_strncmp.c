/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:13:00 by event             #+#    #+#             */
/*   Updated: 2023/07/12 18:51:02 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	if (n == 0)
		return (0);
	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count] && count < n - 1)
		count ++;
	return (s1[count] - s2[count]);
}
