/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:43:44 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/08 15:44:10 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst - src < 0)
		while (i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	else
		while (len > 0)
		{
			((unsigned char*)dst)[(len - 1)] = ((unsigned char*)src)[(len - 1)];
			len--;
		}
	return (dst);
}
