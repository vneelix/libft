/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstempty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:57:46 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/11 14:01:08 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstempty(t_list *begin)
{
	if (begin == NULL)
		return (NULL);
	while (begin->next != NULL)
	{
		if (begin->content == NULL)
			return (begin);
		begin = begin->next;
	}
	if (begin->content == NULL)
		return (begin);
	return (NULL);
}
