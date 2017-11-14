/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:24:46 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/10 20:24:51 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	char *str;
	char *line;
	// int a = 6;

	fd = open(argv[1], O_RDONLY); //FD is created after we open the file, it means we read particular file.
	if (fd == -1)
		return (-1);
	// while (a--)
	// {
		get_next_line(fd, &line);
		ft_putstr(line);
		ft_putchar('\n');
		get_next_line(fd, &line);
		ft_putstr(line);
		ft_putchar('\n');
	// }
	close (fd);
	return (0);
}
