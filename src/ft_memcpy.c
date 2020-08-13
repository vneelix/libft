/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:01:04 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/25 19:41:16 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ret;
	size_t	border;

	if (!dest || !src)
		return (NULL);
	ret = dest;
	border = n / sizeof(int);
	while (border)
	{
		*(int*)dest = *(const int*)src;
		dest += sizeof(int);
		src += sizeof(int);
		border -= 1;
	}
	border = n % sizeof(int);
	while (border)
	{
		*(unsigned char*)dest++ = *(unsigned char*)src++;
		border -= 1;
	}
	return (ret);
}
