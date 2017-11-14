# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/09 18:45:02 by alnoviko          #+#    #+#              #
#    Updated: 2017/10/16 16:02:55 by alnoviko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

R = ar

CC = gcc

PART1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c\
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_toupper.c ft_tolower.c

PART2 = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c\
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c\
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstdelone.c ft_lstdel.c\
		ft_lstadd.c ft_lstiter.c ft_lstmap.c

OTHER = ft_word_count.c ft_word_len.c ft_fill_array.c ft_isspace.c\
		ft_digit_count.c

FILES = $(PART1) $(PART2) $(BONUS) $(OTHER)

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror -c -I libft.h

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) $(FILES)
	ar crs $(NAME) $(OBJ)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
