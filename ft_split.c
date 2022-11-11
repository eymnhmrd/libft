/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:23:45 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/11 16:48:34 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_allocation_error(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i++]);
	}
	free(arr);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	*ft_get_word(char **s, char c)
{
	size_t	i;
	size_t	len;
	char	*str;

	while ((**s) == c)
		(*s)++;
	i = 0;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*s)[i];
		i++;
	}
	str[i] = '\0';
	*s += len;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!arr)
		return (NULL);
	str = (char *)s;
	while (i < len)
	{
		arr[i] = ft_get_word(&str, c);
		if (!arr[i])
			return (ft_allocation_error(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
