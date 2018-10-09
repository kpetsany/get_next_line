/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:21:31 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:21:32 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(dest);
	while (i < n && src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
