/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:18:07 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 23:24:40 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*tmp;
	size_t		i;

	tmp = (void*)malloc(size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((unsigned char*)tmp)[i] = 0;
		i++;
	}
	return (tmp);
}
