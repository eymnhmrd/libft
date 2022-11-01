/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:43:07 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/01 01:56:43 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	l;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (!(*to_find))
		return (str);
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


//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	i;
//	size_t	j;

//	i = 0;
//	if (len <= 0)
//		return (NULL);
//	if ((haystack == needle) || !(*needle))
//		return ((char *)haystack);
//	if (len > ft_strlen(haystack))
//		return (NULL);
//	while (haystack[i] && i < len)
//	{
//		j = 0;
//		while (haystack[i + j] == needle [j] && needle && i + j < len)
//			j++;
//		if (needle[j] == '\0')
//			return ((char *)haystack + i);
//		i++;
//	}
//	return ((char *) NULL);
//}

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	nlen;
//	size_t	i;
//	size_t	j;

//	nlen = ft_strlen(needle);
//	if (!nlen || (haystack == needle) || !len)
//		return ((char *) haystack);
//	j = 0;
//	while (*haystack ++ && j < len)
//	{
//		i = 0;
//		while (haystack[i] == needle[i])
//		{
//			i += 1;
//			j ++;
//		}
//		if (i == nlen && j < len)
//			return ((char *) haystack);
//	}
//	return (NULL);
//}

//int main()
//{
//	char *empty = (char*)"";
//	char *s = ft_strnstr(empty, "", -1);
//	printf("%s\n", s);
//}

//aymnaliblabla