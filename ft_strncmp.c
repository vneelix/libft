/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:54:17 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/07 00:01:04 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	if (n == 0)
		return (0);
	i = 0;
	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	while (*tmp != '\0')
	{
		if (i == (n - 1))
			break ;
		if (*tmp != *tmp2)
			return (*tmp - *tmp2);
		i++;
		tmp++;
		tmp2++;
	}
	return (*tmp - *tmp2);
}
