/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:05:26 by vneelix           #+#    #+#             */
/*   Updated: 2020/02/02 10:29:39 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	extract_words(char **ret, const char *s, char c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s += 1;
		ptr = (char*)(s);
		while (*ptr != c && *ptr != '\0')
			ptr += 1;
		if (ptr != s && (ret[i] = ft_strndup(s, ptr - s)) == NULL)
		{
			while (i != 0)
				free(ret[--i]);
			return (-1);
		}
		s = ptr;
		i += 1;
	}
	return (0);
}

static char	**create_ret(const char *s, char c)
{
	size_t	i;
	char	*ptr;
	char	**ret;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s += 1;
		i += (*s != '\0' ? 1 : 0);
		ptr = (char*)(s);
		while (*ptr != c && *ptr != '\0')
			ptr += 1;
		s = ptr;
	}
	if ((ret = (char**)malloc(sizeof(char*) * (i + 1))) == NULL)
		return (NULL);
	ft_bzero(ret, sizeof(char*) * (i + 1));
	return (ret);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**ret;

	if ((ret = create_ret(s, c)) == NULL)
		return (NULL);
	if (extract_words(ret, s, c))
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}
