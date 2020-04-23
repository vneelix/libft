/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 20:28:14 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/23 20:28:15 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getfile(int fd)
{
	ssize_t	i;
	char	*ret;
	char	*nptr;
	char	buff[BUFF_SIZE + 1];

	ft_bzero(buff, BUFF_SIZE + 1);
	if ((ret = (char*)(ft_memalloc(1))) == NULL)
		return (NULL);
	while ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		nptr = ret;
		ret = ft_strjoin(ret, buff);
		free(nptr);
		if (ret == NULL)
			return (NULL);
		ft_bzero(buff, BUFF_SIZE + 1);
	}
	if (i < 0)
		return (NULL);
	return (ret);
}
