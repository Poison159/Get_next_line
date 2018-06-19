/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:54:39 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 14:13:01 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	chr;

	i = 0;
	src = (unsigned char*)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == chr)
		{
			return (src + i);
		}
		i++;
	}
	return (NULL);
}
