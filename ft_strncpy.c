/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:26:18 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/12 15:26:32 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *dst_begin;

	dst_begin = dst;
	while (len--)
	{
		if (*src != '\0')
		{
			*dst = *((const unsigned char*)src);
			dst++;
			src++;
		}
		else if (*src == '\0' && *dst != '\0')
		{
			*dst = '\0';
			dst++;
		}
	}
	return (dst_begin);
}
