/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:41:31 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/11 13:50:01 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t len;

	len = 0;
	if (lst == NULL)
		return (len);
	while (lst->next != NULL)
	{
		len++;
		lst = lst->next;
	}
	len++;
	return (len);
}
