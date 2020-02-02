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

static int		ft_numlen(int n)
{
	int		l;

	l = 1;
	while (n != 0)
	{
		l++;
		n /= 10;
	}
	if (l != 1)
		l--;
	return (l);
}

static void		ft_print(int n, int l)
{
	int		m;
	char	c;

	m = 1;
	while (l != 1)
	{
		m *= 10;
		l--;
	}
	while (m != 0)
	{
		c = (char)(n / m + 48);
		write(1, &c, 1);
		n %= m;
		m /= 10;
	}
}

void			ft_putnbr(int n)
{
	int		l;

	if (n == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	else if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	l = ft_numlen(n);
	ft_print(n, l);
}
