/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneelix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:50:38 by vneelix           #+#    #+#             */
/*   Updated: 2019/09/12 14:42:30 by vneelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_atoi_check(const char *str, char *sign)
{
	while (*str == '\t' || *str == '\v' || *str == '\f' ||
			*str == '\r' || *str == '\n' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (ft_isdigit(*(str + 1)) != 0)
		{
			if (*str == '-')
				*sign = 'N';
			str++;
		}
		else
			return (NULL);
	}
	if (ft_isdigit(*str) == 0)
		return (NULL);
	return (str);
}

static int			ft_atoi_result(unsigned long num, char *sign)
{
	if (*sign == 'N')
	{
		if (num > 9223372036854775808UL)
			return (0);
		return ((int)num * (-1));
	}
	else
	{
		if (num > 9223372036854775807UL)
			return (-1);
		return ((int)num);
	}
}

int					ft_atoi(const char *str)
{
	unsigned long	num;
	char			sign;

	sign = 'P';
	str = ft_atoi_check(str, &sign);
	if (str == NULL)
		return (0);
	num = 0;
	while (ft_isdigit(*str))
	{
		if (num >= 1000000000000000000UL)
		{
			if (sign == 'N')
				return (0);
			return (-1);
		}
		num = num * 10 + ((unsigned int)(*str) - 48);
		str++;
	}
	return (ft_atoi_result(num, &sign));
}
