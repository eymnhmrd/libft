/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:03:14 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/05 04:27:01 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
//#include <stdio.h>

//void	f(void *ar)
//{
//	printf("%s ", ar);
//}

//int main()
//{
//	t_list	*n0;
//	n0 = ft_lstnew(ft_strdup("souhaib"));
//	n0->next = ft_lstnew(ft_strdup("zaml"));
//	n0->next->next = ft_lstnew(ft_strdup("li hwak"));
//	ft_lstiter(n0, &f);
//}