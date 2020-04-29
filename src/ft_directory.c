/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_directory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 02:14:45 by vneelix           #+#    #+#             */
/*   Updated: 2020/04/29 03:51:02 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_delete(char **nptr)
{
	void *ptr;

	ptr = nptr;
	while (nptr != NULL && *nptr != NULL)
	{
		ft_memdel(*nptr);
		nptr += 1;
	}
	ft_memdel(ptr);
	return (NULL);
}

static char	**add_file(char **file, char *n_file, size_t *num_files)
{
	char			**ptr;
	static size_t	count = 1;

	if (file == NULL || n_file == NULL)
	{
		ft_delete(file);
		ft_memdel(n_file);
		return (NULL);
	}
	if ((ptr = ft_memalloc(sizeof(char*) * (count + 1))) == NULL)
	{
		ft_delete(file);
		ft_memdel(n_file);
		return (NULL);
	}
	ptr = ft_memcpy(ptr, file, sizeof(char*) * (count - 1));
	ptr[count - 1] = n_file;
	if (num_files != NULL)
		*num_files = count - 1;
	count += 1;
	ft_memdel(file);
	return (ptr);
}

char		**ft_directory(char *name, size_t *num_files)
{
	DIR				*dir;
	char			**ret;
	struct dirent	*entry;

	if ((ret = (char**)ft_memalloc(sizeof(char*))) == NULL)
		return (NULL);
	if ((dir = opendir(name)) == NULL)
	{
		closedir(dir);
		return (ft_delete(ret));
	}
	while ((entry = readdir(dir)) != NULL)
	{
		if ((entry->d_name)[0] == '.')
			continue ;
		if ((ret = add_file(ret, ft_strdup(entry->d_name), num_files)) == NULL)
		{
			closedir(dir);
			return (NULL);
		}
	}
	closedir(dir);
	return (ret);
}
