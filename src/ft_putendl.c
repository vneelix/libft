/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:55:56 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/08 21:44:12 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_putendl(const char *s)
{
	ssize_t	ret;

	if ((ret = write(1, s, ft_strlen(s))) == -1)
		return (-1);
	if (ft_putchar('\n') == -1)
		return (-1);
	return (ret + 1);
}
