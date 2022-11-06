/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:41:01 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/06 14:48:50 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//char	*ft_strchr(const char *s, int c)
//{
//	size_t	i;

//	i = 0;
//	while (s[i])
//	{
//		if (s[i] == (char)c)
//		{
//			return ((char *)&s[i]);
//		}
//		i++;
//	}
//	if ((char) !c)
//		return ((char *)&s[i]);
//	return (NULL);
//}

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}
