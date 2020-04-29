/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 20:28:14 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/29 04:04:48 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_file(int fd)
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

char		*get_file(char *name, int fd)
{
	int	new_fd;

	new_fd = 0;
	if (name != NULL)
		if ((fd = open(name, O_RDONLY)) == -1)
			return (NULL);
	return (read_file(name != NULL ? new_fd : fd));
}
