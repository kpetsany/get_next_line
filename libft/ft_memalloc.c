/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:13:40 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:13:41 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*pt;

	pt = (void*)malloc(size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, size);
	return (pt);
}
