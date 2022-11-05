/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 07:03:29 by ahamrad           #+#    #+#             */
/*   Updated: 2022/11/03 00:39:01 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

//#include <stdio.h>

//void remove_element(void *str) {
//	printf("Removing '%s' ...\n", (char *)str);
//	free(str);
//}

//int main () {
//	t_list *list = ft_lstnew(ft_strdup("hello"));
//	list->next = ft_lstnew(ft_strdup("world"));
//	list->next->next = NULL;
//	ft_lstclear(&list, &remove_element);
//}