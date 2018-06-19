/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:01:51 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 14:32:06 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int index;
	int len;

	i = 0;
	index = 0;
	len = strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[index] == haystack[index + i])
		{
			if (index == len - 1)
				return ((char*)(haystack + i));
			index++;
		}
		index = 0;
		i++;
	}
	return (NULL);
}
