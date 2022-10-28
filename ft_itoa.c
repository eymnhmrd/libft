/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:49:47 by ahamrad           #+#    #+#             */
/*   Updated: 2022/10/28 22:45:27 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_digit(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char *ft_strrev(char *str)
{
	size_t	i;
	size_t	l;
	char	tmp;

	l = ft_strlen(str) - 1;
	i = 0;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}

static 

char *ft_itoa(int n)
{
	char	*num;
	size_t	nl;
	size_t	i;

	i = 1;
	nl = ft_count_digit(n);
	if (n < 0)
	{
		nl++;
		n *= -1;
	}
	num = malloc(sizeof(char) * (nl + 1));
	if (n < 0)
		num[0] = '-';
	while (i < nl)
	{
		num[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	num[i] = '\0';
	return (ft_strrev(num));
}

 #include <stdio.h>

 int main()
 {
     int n = 12345;
     printf("%s",ft_itoa(-2147483648));
     // printf("%d",n);
 }
