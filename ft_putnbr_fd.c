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

static int		ft_numlen_fd(int n)
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

static void		ft_print_fd(int n, int l, int fd)
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
		write(fd, &c, 1);
		n %= m;
		m /= 10;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int		l;

	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	l = ft_numlen_fd(n);
	ft_print_fd(n, l, fd);
}
