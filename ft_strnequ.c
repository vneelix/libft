/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:17:37 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/07 13:56:41 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}
