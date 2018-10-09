/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:22:01 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:22:02 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	x;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	x = 0;
	while (s1[x] || s2[x])
	{
		if ((s1[x] != s2[x]) && n > x)
			return (0);
		x++;
	}
	return (1);
}
