/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsrc_sz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:51:59 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/11 13:55:11 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsrc_sz(t_list *begin, size_t size)
{
	if (begin == NULL)
		return (NULL);
	while (begin->next != NULL)
	{
		if (begin->content_size == size)
			return (begin);
		begin = begin->next;
	}
	if (begin->content_size == size)
		return (begin);
	return (NULL);
}
