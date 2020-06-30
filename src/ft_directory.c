/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_directory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 02:14:45 by vneelix           #+#    #+#             */
/*   Updated: 2020/06/30 12:19:17 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_delete(char **nptr)
{
	char **temp;

	if (nptr == NULL)
		return (NULL);
	temp = nptr;
	while (*nptr != NULL)
	{
		ft_memdel(*nptr);
		nptr += 1;
	}
	ft_memdel(temp);
	return (NULL);
}

size_t	ft_count(char *name)
{
	size_t			i;
	DIR				*dir;
	struct dirent	*entry;

	if ((dir = opendir(name)) == NULL)
		return (0);
	i = 0;
	while ((entry = readdir(dir)) != NULL)
		if (entry->d_type == DT_REG)
			i += 1;
	closedir(dir);
	return (i);
}

void	*ft_write(char **temp, DIR *dir, char *dir_name)
{
	size_t			i;
	struct dirent	*entry;

	i = 0;
	while ((entry = readdir(dir)) != NULL)
	{
		if (entry->d_type != DT_REG)
			continue ;
		if ((temp[i] = ft_strjoin(dir_name, entry->d_name)) == NULL)
			return (ft_delete(temp));
		i += 1;
	}
	return (temp);
}

char	**ft_directory(char *dir_name, size_t *num_files)
{
	DIR		*dir;
	char	**ret;

	if ((dir = opendir(dir_name)) == NULL)
		return (NULL);
	if ((*num_files = ft_count(dir_name)) == 0)
	{
		closedir(dir);
		return (NULL);
	}
	if ((ret = (char**)ft_memalloc(sizeof(
		void*) * (ft_count(dir_name) + 1))) == NULL)
	{
		closedir(dir);
		return (NULL);
	}
	ret = ft_write(ret, dir, dir_name);
	closedir(dir);
	return (ret);
}
