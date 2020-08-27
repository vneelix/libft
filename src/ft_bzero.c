/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:53:47 by vneelix           #+#    #+#             */
/*   Updated: 2020/08/19 19:13:02 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *nptr, size_t n)
{
	while (n / sizeof(int))
	{
		*((int*)nptr) = 0;
		nptr = (int*)nptr + 1;
		n -= sizeof(int);
	}
	while (n % sizeof(int))
	{
		*((unsigned char*)nptr++) = 0;
		n -= sizeof(unsigned char);
	}
}
