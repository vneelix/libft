/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:14:24 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/25 19:38:58 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len[2];

	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(s2);
	if ((ret = (char*)malloc(len[0] + len[1] + 1)) == NULL)
		return (NULL);
	ft_bzero(ret, len[0] + len[1] + 1);
	ft_strcat(ret, s1);
	ft_strcat(ret + len[0], s2);
	return (ret);
}
