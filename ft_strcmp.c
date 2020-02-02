/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:48:48 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/06 23:53:51 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *tmp;
	unsigned char *tmp2;

	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	while (*tmp != '\0')
	{
		if (*tmp != *tmp2)
			return (*tmp - *tmp2);
		tmp++;
		tmp2++;
	}
	return (*tmp - *tmp2);
}
