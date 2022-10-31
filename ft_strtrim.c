/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:21:27 by ahamrad           #+#    #+#             */
/*   Updated: 2022/10/31 02:20:51 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_in_set(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	end--;
	while (s1[start] && ft_in_set(set, s1[start]))
		start++;
	while (s1[end] && ft_in_set(set, s1[end]) && end > start)
		end--;
	str = malloc(sizeof(char) * (end - start) + 2);
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	// char *s = ft_strtrim("      xxxxd    xxxx   ", " x");
// 	// // free(s);
// 	// printf("%s \n",s);
// }