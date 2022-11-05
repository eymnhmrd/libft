/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:43:07 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/05 13:01:18 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	l;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (!(*to_find))
		return ((char *)str);
	l = ft_strlen(to_find);
	if (len < l)
		return (NULL);
	while (*str != '\0' && len >= l)
	{
		if (ft_memcmp(str, to_find, l) == 0)
			return (str);
		str++;
		len--;
	}
	return (NULL);
}
