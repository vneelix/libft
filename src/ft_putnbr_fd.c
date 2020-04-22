/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:59:10 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/09 18:02:36 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_putnbr_fd(int n, int fd)
{
	char	*s;
	ssize_t	ret;

	if ((s = ft_itoa(n)) == NULL)
		return (-1);
	ret = write(fd, s, ft_strlen(s));
	free(s);
	return (ret);
}
