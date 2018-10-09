/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetsany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:23:21 by kpetsany          #+#    #+#             */
/*   Updated: 2018/07/24 15:23:22 by kpetsany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_first_space(char const *str)
{
	size_t	x;

	x = 0;
	while (str[x] && (str[x] == 32 || str[x] == '\n' || str[x] == '\t'))
	{
		x++;
	}
	return (x);
}

static size_t	ft_end_space(char const *str)
{
	size_t	x;
	size_t	count;
	size_t	len;

	len = ft_strlen(str);
	x = len - 1;
	if (len == 0)
		return (0);
	count = 0;
	while (x > 0 && (str[x] == 32 || str[x] == '\t' || str[x] == '\n'))
	{
		count++;
		x--;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	x;
	size_t	y;
	size_t	lastspace;
	size_t	len;

	if (s == NULL)
		return (NULL);
	x = ft_first_space(s);
	lastspace = ft_end_space(s);
	len = ft_strlen(s);
	if (len - x <= 0)
		return (ft_strdup(""));
	y = 0;
	if (!(str = ft_strnew(len - x - lastspace)))
		return (NULL);
	while (s[x] != '\0' && x < len - lastspace)
		str[y++] = s[x++];
	return (str);
}
