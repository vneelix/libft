/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:28:27 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 12:46:08 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*ret;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);
	ret = tmp;
	lst = lst->next;
	while (lst->next != NULL)
	{
		tmp->next = f(lst);
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = f(lst);
	if (tmp->next == NULL)
		return (NULL);
	return (ret);
}
