/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:01:02 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 20:36:32 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_putnbr(int n)
{
	char*	s;
	ssize_t	ret;

	if ((s = ft_itoa(n)) == NULL)
		return (-1);
	if ((ret = write(1, s, ft_strlen(s))) == -1)
		return (-1);
	free(s);
	return (ret);	
}
