/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:02:06 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/08 16:21:24 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*tmp;
	const unsigned char		*tmp2;

	tmp = (const unsigned char*)s1;
	tmp2 = (const unsigned char*)s2;
	while (n--)
	{
		if (*tmp != *tmp2)
			return (*tmp - *tmp2);
		tmp++;
		tmp2++;
	}
	return (0);
}
