/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 13:13:58 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/16 15:59:49 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(s))
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[j])
		j++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == '\0')
		j--;
	if (j < i)
		return (ft_strnew(0));
	return (ft_strsub(s, i, j - i + 1));
}
