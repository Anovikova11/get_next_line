/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 15:33:06 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/14 15:53:08 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 1. Create a new_node, it's a new head.
** 2. Del previous node and free it.
** 3. Repeat.
** 4. Make last one NULL.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new_node;

	while (*alst)
	{
		new_node = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = new_node;
	}
}
