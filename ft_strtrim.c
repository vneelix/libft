/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:43:54 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/09 17:55:52 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fd(const char *s, const char **st, const char **sp)
{
	while (*s == '\n' || *s == '\t' || *s == ' ')
	{
		if (*s == '\0')
			break ;
		s++;
	}
	*st = s;
	while (*s != '\0')
		s++;
	if (s != *st)
		s--;
	while (*s == '\n' || *s == '\t' || *s == ' ')
	{
		if (s == *st)
			break ;
		s--;
	}
	*sp = s;
}

static void		ft_cpy(char *dst, const char *st, const char *sp)
{
	while (st <= sp)
	{
		*dst = *st;
		dst++;
		st++;
	}
	if (*sp != '\0')
		*dst = '\0';
}

char			*ft_strtrim(char const *s)
{
	const char		*st;
	const char		*sp;
	char			*tmp;

	if (s == NULL)
		return (NULL);
	tmp = NULL;
	ft_fd(s, &st, &sp);
	if ((st == sp) && (st == '\0'))
	{
		tmp = (char*)malloc(sizeof(*tmp) * 1);
		if (tmp == NULL)
			tmp[0] = '\0';
		return (tmp);
	}
	else
		tmp = (char*)malloc(sizeof(*tmp) * (sp - st + 2));
	if (tmp == NULL)
		return (NULL);
	ft_cpy(tmp, st, sp);
	return (tmp);
}
