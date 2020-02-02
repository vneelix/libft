/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:52:16 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/10 13:30:29 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_empty_lst(t_list *lst)
{
	lst->content = NULL;
	lst->content_size = 0;
	lst->next = NULL;
}

static void		*ft_create_cpy(void const *data, size_t size)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = (void*)malloc(sizeof(*tmp) * size);
	if (tmp == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned char*)tmp)[i] = ((unsigned const char*)data)[i];
		i++;
	}
	return (tmp);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	if (content == NULL)
	{
		ft_empty_lst(tmp);
		return (tmp);
	}
	tmp->content = ft_create_cpy(content, content_size);
	if (tmp->content == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->content_size = content_size;
	tmp->next = NULL;
	return (tmp);
}
