/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:10:57 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:10:59 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespace(int c)
{
	if ((c >= '\t' && c <= '\r') || c == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *c)
{
	int	value;
	int	sign;
	int	m;

	value = 0;
	sign = 1;
	m = 0;
	while (ft_whitespace(*c))
		c += 1;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sign = -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		value *= 10;
		value += (int)(*c - '0');
		c++;
		m++;
	}
	if (m > 19)
		return ((sign < 0) ? 0 : -1);
	return (value * sign);
}
