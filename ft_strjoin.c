/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 13:45:37 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 14:23:31 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len1;
	int		len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char*)ft_memalloc(len1 + len2 + 1);
	if (s1 && s2 && str)
	{
		while (i < len1)
		{
			str[i] = *s1++;
			i++;
		}
		while (i < len1 + len2)
		{
			str[i] = *s2++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
