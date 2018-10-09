/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:22:27 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:22:28 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		len;

	len = ft_strlen(little);
	if (len == 0)
		return ((char *)big);
	while (*big && len <= n--)
	{
		if (ft_memcmp(big++, little, len) == 0)
			return ((char *)big - 1);
	}
	return (NULL);
}
