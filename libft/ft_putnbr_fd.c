/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 11:03:07 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/06 11:03:09 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = -n2;
	}
	if (n2 > 9)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putnbr_fd(n2 % 10, fd);
	}
	else
	{
		ft_putchar_fd(n2 + 48, fd);
	}
}
