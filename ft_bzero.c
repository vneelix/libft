/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:53:47 by vneelix           #+#    #+#             */
/*   Updated: 2020/02/02 10:22:15 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t size)
{
	while ((size-- > 0) && (mem != NULL))
		*((unsigned char*)mem++) = 0;
}
