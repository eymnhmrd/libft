/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:08:16 by ahamrad           #+#    #+#             */
/*   Updated: 2022/10/29 06:45:39 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst,const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	if (dst)
		len_dst = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + len_dst);
}