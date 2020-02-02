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

static int		ft_numlen(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
		n = 2147483647;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	if (len != 1)
		len--;
	return (len);
}

static void		ft_putn(char *s, int n, int len)
{
	if (n == -2147483648)
	{
		n = 214748364;
		s[len] = '8';
		len--;
	}
	else if (n < 0)
		n *= -1;
	if (n == 0)
		s[len] = '0';
	while (n != 0)
	{
		s[len] = (char)((n % 10) + 48);
		len--;
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;
	char	sign;

	sign = 'P';
	len = ft_numlen(n);
	if (n < 0)
	{
		len++;
		sign = 'N';
	}
	str = (char*)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (sign == 'N')
		str[0] = '-';
	ft_putn(str, n, (len - 1));
	return (str);
}
