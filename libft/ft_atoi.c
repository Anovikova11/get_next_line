/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 19:19:02 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/13 14:21:39 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		sign = -1;
		i++;
	}
	str[i] == '+' ? i++ : 0;
	while (str[i] != '\0')
	{
		if ((str[i] > '9') || (str[i] < '0'))
			return (res * sign);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
