# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 12:13:09 by nblackie          #+#    #+#              #
#    Updated: 2020/02/25 18:35:51 by ocathern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
	   ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
	   ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c\
	   ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_toupper.c ft_tolower.c\
	   ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
	   ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c\
	   ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c\
	   ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c\
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	   ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c\
	   ft_lstmap.c\
	   ft_str_is_lowercase.c ft_str_is_uppercase.c ft_strrev.c\
	   ft_lstpushback.c ft_lstremove.c ft_char_position.c\
	   get_next_line.c ft_free_tab.c ft_strfjoin.c ft_realloc.c\
	   ft_freestrjoin.c ft_freestrjoinch.c ft_strjoinch.c\
	   ft_isspace.c ft_pathcreator.c ft_strsplitspace.c\
	   ft_strreplace.c ft_isemptystr.c
		
INCLUDE = -I libft.h

OBJ = $(subst .c,.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@gcc -Wall -Werror -Wextra $< -c -o $@

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
