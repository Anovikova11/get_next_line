/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 16:40:09 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/16 16:40:14 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int n)
{
	int		count;
	long	ln;

	count = 0;
	ln = (long)n;
	if (ln <= 0)
	{
		ln = -ln;
		count++;
	}
	while (ln != 0)
	{
		ln = ln / 10;
		count++;
	}
	return (count);
}
