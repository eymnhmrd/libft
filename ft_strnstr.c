/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:43:07 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/06 14:17:39 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	char	*str;
//	char	*to_find;
//	size_t	l;

//	str = (char *)haystack;
//	to_find = (char *)needle;
//	if (!(*to_find))
//		return ((char *)str);
//	l = ft_strlen(to_find);
//	if (len < l || ft_strlen(str) < l)
//		return (NULL);
//	while (*str != '\0' && len >= l)
//	{
//		if (ft_memcmp(str, to_find, l) == 0)
//			return (str);
//		str++;
//		len--;
//	}
//	return (NULL);
//}
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return ((char *)haystack);
	if (haystack == needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (NULL);
}
