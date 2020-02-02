/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:01:04 by vneelix           #+#    #+#             */
/*   Updated: 2020/02/02 10:26:07 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;
	
	ret = dst;
	while (n-- > 0 && src != NULL && dst != NULL)
		*((unsigned char*)dst++) = *((unsigned char*)src++);
	return(ret);
}
