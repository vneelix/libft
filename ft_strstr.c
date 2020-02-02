/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:10:25 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/09 17:12:25 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t len1;
	size_t len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(haystack);
	len2 = ft_strlen(needle);
	if (len2 > len1)
		return (NULL);
	while (i <= (len1 - len2))
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == len2)
			return (&((char*)haystack)[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
