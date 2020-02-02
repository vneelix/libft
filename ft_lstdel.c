/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <vneelix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:36:14 by vneelix           #+#    #+#             */
/*   Updated: 2019/10/09 21:13:42 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst_rem;

	if (alst == NULL || *alst == NULL || del == NULL)
		return ;
	while ((*alst)->next != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		lst_rem = *alst;
		*alst = (*alst)->next;
		free(lst_rem);
	}
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
