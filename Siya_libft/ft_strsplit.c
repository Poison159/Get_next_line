/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 13:50:17 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 17:18:47 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *str, int start, char c)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[start] && (str[start] != c))
	{
		start++;
		counter++;
	}
	return (counter);
}

static int		ft_split_count(char const *s, char c)
{
	int		flag;
	int		words;
	int		counter;
	char	*str;

	str = (char *)s;
	counter = 0;
	words = 0;
	while (str[counter])
	{
		flag = 0;
		while ((str[counter] != c) && str[counter + 1])
		{
			if (flag == 0)
			{
				flag = 1;
				words++;
			}
			counter++;
		}
		counter++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		counter;
	int		words;
	char	**arr;
	char	*str;

	i = 0;
	counter = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	words = ft_split_count(s, c);
	if (!(arr = (char**)ft_memalloc(sizeof(char*) * words + 1)))
		return (NULL);
	while (i < words)
	{
		while ((str[counter] == c) && str[counter])
			counter++;
		arr[i] = ft_strsub(str, counter, ft_count(str, counter, c));
		while ((str[counter] != c) && str[counter])
			counter++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
