/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:49:47 by ahamrad           #+#    #+#             */
/*   Updated: 2022/10/29 06:47:00 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
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

static char	*ft_strrev(char *str)
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

static void	ft_check_negative(int *n, unsigned int *nbr, size_t *nl)
{
	if (*n < 0)
	{
		*nbr = -(*n);
		nl++;
	}
}

char	*ft_itoa(int n)
{
	char			*num;
	size_t			nl;
	size_t			i;
	unsigned int	nbr;

	i = 0;
	nl = 0;
	nbr = n;
	ft_check_negative(&n, &nbr, &nl);
	nl += ft_count_digit(n);
	num = malloc(sizeof(char) * (nl + 1));
	if (!num)
		return (NULL);
	while (nbr)
	{
		num[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (n < 0)
		num[i++] = '-';
	return (ft_strrev(num));
}
