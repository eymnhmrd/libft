/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 04:54:03 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/01 05:38:44 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	handler_long_atoi(long long int n, long long int o)
{
	if ((n / 10) == o)
		return (0);
	return (1);
}

static int	rtn_atoi(long long int res, int sign, const char *str)
{
	long long int	old_res;

	while (*str >= '0' && *str <= '9')
	{
		old_res = res;
		res = res * 10 + (*str - '0');
		if (handler_long_atoi(res, old_res) == 0)
			str++;
		else if (handler_long_atoi(res, old_res) == 1)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	long long int		res;
	int					sign;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	return (rtn_atoi(res, sign, str) * sign);
}

//#include <stdio.h>

//int main()
//{
//	//printf("%d\n",ft_atoi("-1584562496666895533685526668"));
//	//printf("%d",atoi("-1584562496666895533685526668"));
//	printf("%d\n",ft_atoi("+12"));
//	printf("%d",atoi("+12"));
//}