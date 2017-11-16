/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:24:46 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/14 15:36:59 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	char *str;
	int line;

	fd = open(argv[1], O_RDONLY); //FD is created after we open the file, it means we read particular file.
	if (fd == -1)
		return (-1);
	while ((line = get_next_line(fd, &str)) != 0)
	{
		printf("%s\n", str);
		printf("Return: %d\n", line);
		free(str);
	}
	printf("Return: %d\n", line);
	close (fd);
	return (0);
}
