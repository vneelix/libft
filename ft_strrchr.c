/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:53:59 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 21:38:50 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		f;
	size_t	i;
	size_t	l_p;

	i = 0;
	f = 0;
	l_p = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			l_p = i;
			if (f == 0)
				f = 1;
		}
		i++;
	}
	if (f == 1)
		return (&(((char*)s)[l_p]));
	if (c == '\0')
		return (&(((char*)s)[i]));
	return (NULL);
}
