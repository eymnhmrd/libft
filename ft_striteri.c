/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:55:01 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/06 12:35:27 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//#include <stdio.h>

//void	f(unsigned int a, char	*c)
//{
//	printf("%d -> %c\n", a, *c);
//}

//int main()
//{
//	char	*s = "hasbulla";
//	ft_striteri(s, f);
//}
