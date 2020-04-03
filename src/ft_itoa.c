/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:27:10 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/11 14:08:14 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*		ft_itoa(int n)
{
	size_t	i;
	char*	ret;
	int		sign;
	char	storage[12];

	i = 12;
	sign = (n >= 0 ? 1 : -1);
	ft_bzero(storage, 12);
	while (n != 0 || (i == 12 && n == 0))
	{
		storage[--i] = n % 10 * sign + '0';
		n /= 10;
	}
	if (sign != 1)
		storage[--i] = '-';
	if ((ret = (char*)malloc(12 - i + 1)) == NULL)
		return (NULL);
	ft_bzero(ret, 12 - i + 1);
	return (ft_memcpy(ret, storage + i, 12 - i));
}
