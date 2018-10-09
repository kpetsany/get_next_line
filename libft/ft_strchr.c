/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:17:23 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:17:24 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (*s1 != (char)c && *s1)
		s1++;
	if (*s1 == 0 && *s1 != (char)c)
		return (NULL);
	else if (*s1 == (char)c)
		return (s1);
	return (s1);
}
