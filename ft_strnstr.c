/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:34:41 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 22:41:02 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t len2;

	i = 0;
	j = 0;
	len2 = ft_strlen(needle);
	if (*needle == '\0')
		return ((char*)haystack);
	if (len2 > len && haystack != NULL)
		return (NULL);
	while ((i <= (len - len2)) && haystack[i] != '\0')
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
