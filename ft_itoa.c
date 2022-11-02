/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:49:47 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/02 00:47:02 by ahamrad          ###   ########.fr       */
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

static size_t	ft_check_negative(int *n, unsigned int *nbr, size_t nl)
{
	if (*n < 0)
	{
		*nbr = -(*n);
		nl++;
	}
	return (nl);
}

static char	*return_zero(void)
{
	char	*zero;

	zero = malloc(2 * sizeof(char));
	if (!zero)
		return (zero);
	zero[0] = '0';
	zero[1] = '\0';
	return (zero);
}

char	*ft_itoa(int n)
{
	char			*num;
	size_t			nl;
	size_t			i;
	unsigned int	nbr;

	if (n == 0)
		return (return_zero());
	i = 0;
	nl = 0;
	nbr = n;
	nl = ft_check_negative(&n, &nbr, nl);
	nl += ft_count_digit(n);
	num = malloc(sizeof(char) * (nl + 1));
	if (!num)
		return (num);
	while (nbr)
	{
		num[nl - 1 - i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (n < 0)
		num[0] = '-';
	num[nl] = '\0';
	return (num);
}
