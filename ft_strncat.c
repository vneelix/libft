/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:54:55 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/08 23:42:26 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *r;

	r = s1;
	while (*s1 != '\0')
		s1++;
	while (n--)
	{
		if (*s2 != '\0')
			*s1 = *((const unsigned char*)s2);
		else
			break ;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (r);
}
