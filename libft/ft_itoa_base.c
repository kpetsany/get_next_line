/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:13:07 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:13:08 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long value, int base)
{
	static char	rep[] = "0123456789abcdef";
	static char buff[65];
	char		*ptr;
	long long	num;

	ptr = &buff[64];
	if (base < 2 || base > 16)
		return (0);
	*ptr = '\0';
	num = value;
	if (num < 0)
		num *= -1;
	if (num == 0)
		*--ptr = rep[num % base];
	while (num != 0)
	{
		*--ptr = rep[num % base];
		num /= base;
	}
	if (value < 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}
