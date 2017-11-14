/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:18:16 by alnoviko          #+#    #+#             */
/*   Updated: 2017/11/06 22:18:19 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Write a function that returns a line read from a file descriptor.
** The first parameter is the file descriptor that will be used to read.
** The second parameter is the address of a pointer to a character that will 
be used to save the line read from the file descriptor.
** The return value can be 1, 0 or -1 depending on whether a line has been 
read, when the reading has been completed, or if an error has happened.
** get_next_line must return its result without ’\n’.

** 1. Read the whole test file, and store into a string.
*/

int 	ft_read_file(int fd, char  **string)
{
	
	char	*buf;
	int		ret;
	char 	*tmp;

	buf = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (*string == NULL)
			*string = ft_strdup(buf); //copy buf to create a string if there is none before
		else 
		{
			tmp = *string;
			*string = ft_strjoin(*string, buf); // add next characters, if buf = 8, then 8 chars
			ft_memdel((void**)&tmp);
		}
		ft_bzero(buf, ft_strlen(buf)); // set buf to 0, so there are no more chars left in the buf.
	}
	ft_memdel((void**)&buf);
	return (ret);
}

/*
** 2. Go through string and find the first new line.
** 3. Set pointer to '\0' in order to copy first found line to the buf.
** First found line = *line = part of string before '\0'.
** 3. Set a pointer to the begining of second line to skip first found line.
** 4. Itarate through string again to find a second line, ending with '\n'.
** 4. What to do with OEF? 
*/

int 	get_next_line(const int fd, char **line)
{
	char 			*ptr;
	static char 	*string;
	char 			*tmp;
	
    if (ft_read_file(fd, &string) < 0 || !line)
    	return (-1);
	if (*string && (ptr = ft_strchr(string, '\n'))) //take a part after first nl, and set a pointer to the first newline
	{
		tmp = string;
		*ptr = '\0'; // str = '\n' = 0, set a pointer to a begining of a new line.
		//*line = ft_strsub(string, 0, str - string);
		*line = ft_strdup(string); //copy result before first newline to a line.
		string = ft_strdup(ptr + 1); //start from first char of the second line.
		ft_memdel((void**)&tmp);
//		if (ft_strlen(string) == 0)
//			ft_memdel((void**)string);
		return (1);
	}
	if (*string)
	{
		tmp = string;
		*line = ft_strdup(string);
		ft_memdel((void**)&tmp);
		return (1);
	}
	return (0);
}
