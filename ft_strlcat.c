/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:44:59 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/12 14:48:36 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len == (size - 1))
		return (dst_len + src_len);
	i = 0;
	while (src[i] != '\0')
	{
		if ((dst_len + i) < size - 1)
			dst[dst_len + i] = src[i];
		else
			break ;
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len > size)
		return (size + src_len);
	return (dst_len + src_len);
}
