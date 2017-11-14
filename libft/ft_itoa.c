/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 16:42:03 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/13 17:44:19 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	ln;

	len = 0;
	ln = (long)n;
	len = ft_digit_count(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (ln < 0)
	{
		str[0] = '-';
		ln = -ln;
	}
	str[len--] = (ln % 10) + '0';
	while (ln >= 10)
	{
		ln = ln / 10;
		str[len--] = (ln % 10) + '0';
	}
	return (str);
}
