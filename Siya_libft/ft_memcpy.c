/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:53:10 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 14:11:40 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dp;
	char	*sp;

	dp = (char*)dest;
	sp = (char*)src;
	while (n--)
		*dp++ = *sp++;
	return (dest);
}
