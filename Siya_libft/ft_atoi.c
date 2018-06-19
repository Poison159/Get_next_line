/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shadebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:03:34 by shadebe           #+#    #+#             */
/*   Updated: 2017/06/11 14:07:02 by shadebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int done;
	int flag;

	done = 0;
	i = 0;
	flag = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v' || nptr[i]
			== '+' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '-')
	{
		flag++;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		done = ((done * 10) + nptr[i]) - '0';
		i++;
	}
	if (flag == 1)
		done = done * -1;
	return (done);
}
