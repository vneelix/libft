/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:08:07 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/25 19:42:12 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char *ptr;

	if (!s)
		return (0);
	ptr = s;
	while (*ptr)
		ptr += 1;
	return ((size_t)ptr - (size_t)s);
}
