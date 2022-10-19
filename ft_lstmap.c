/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <rouarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:19:31 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/19 06:44:45 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;

	(void)del;
	l = NULL;
	if (!lst)
		return (NULL);
	l -> content = ft_lstnew((*f)(lst -> content));
	while (lst != NULL)
		ft_lstadd_back(l, (*f)(lst -> content));
	l -> next = NULL;
	return (l);
}
