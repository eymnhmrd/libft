/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:55:48 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/06 12:58:27 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}

//#include <stdio.h>
//int main()
//{
//	int a;
//	ft_memset((char *)&a, 57,1);
//	ft_memset((char *)&a + 1, 5,1);
//	ft_memset((char *)&a + 2, 0,1);
//	ft_memset((char *)&a + 3, 0,1);
//	printf("%d", a);
//}
