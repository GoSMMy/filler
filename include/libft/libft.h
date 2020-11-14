/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 12:25:22 by nblackie          #+#    #+#             */
/*   Updated: 2020/02/25 18:36:05 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define FT_MIN_INT -2147483648
# define FT_MAX_INT 2147483647
# define BUFF_SIZE 1
# define FT_ABS(X) (((X) < 0) ? (-(X)) : (X))

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_element
{
	int					fd;
	char				*buf;
	struct s_element	*next;
}						t_element;

size_t					ft_strlen(const char *s);

int						ft_free_tab(void ***tab);

int						ft_strcmp(const char *s1, const char *s2);

char					*ft_strdup(const char *s1);

void					*ft_memset(void *b, int c, size_t len);

void					ft_bzero(void *s, size_t n);

void					*ft_memcpy(void *dst, const void *src, size_t n);

void					*ft_memccpy (void *dst, const void *src, int c,
		size_t n);

void					*ft_memmove(void *dst, const void *src, size_t len);

void					*ft_memchr(const void *s, int c, size_t n);

int						ft_memcmp(const void *s1, const void *s2, size_t n);

char					*ft_strcpy(char *dest, const char *src);

char					*ft_strncpy(char *dest, const char
		*src, size_t n);

char					*ft_strcat(char *dest, const char *src);

char					*ft_strncat(char *dest, const char *src, size_t nb);

size_t					ft_strlcat(char *dest, const char *src, size_t size);

char					*ft_strchr(const char *str, int ch);

char					*ft_strrchr (const char *str, int ch);

char					*ft_strstr(const char *str, const char *to_find);

char					*ft_strnstr(const char	*str, const char *to_find,
		size_t len);

int						ft_strncmp(const char *s1, const char *s2, size_t n);

int						ft_atoi(const char *str);

int						ft_isalpha(int c);

int						ft_isdigit(int ch);

int						ft_isalnum(int ch);

int						ft_isascii(int ch);

int						ft_isprint(int ch);

int						ft_toupper(int ch);

int						ft_tolower(int ch);

void					*ft_memalloc(size_t size);

void					ft_memdel(void **ap);

char					*ft_strnew(size_t size);

void					ft_strdel(char **as);

void					ft_strclr(char *s);

void					ft_striter(char *s, void (*f)(char *));

void					ft_striteri(char *s, void (*f)(unsigned int,
			char *));

char					*ft_strmap(char const *s, char (*f)(char));

char					*ft_strmapi(char const *s, char
		(*f)(unsigned int, char));

int						ft_strequ(char const *s1, char const *s2);

int						ft_strnequ(char const *s1, char const *s2,
		size_t n);

char					*ft_strsub(char const *s, unsigned int
		start, size_t len);

char					*ft_strfjoin(char *s1, char *s2, int arg_to_free);

char					*ft_strjoin(char const *s1, char const
		*s2);

char					*ft_strtrim(char const *s);

char					**ft_strsplit(char const *s, char c);

char					*ft_itoa(int n);

void					ft_putchar(char c);

void					ft_putstr(const char *s);

void					ft_putendl(char const *s);

void					ft_putnbr(int n);

void					ft_putchar_fd(char c, int fd);

void					ft_putstr_fd(char const *s, int fd);

void					ft_putendl_fd(char const *s, int fd);

void					ft_putnbr_fd(int n, int fd);

t_list					*ft_lstnew(void const *content, size_t
		content_size);

void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));

void					ft_lstdel(t_list **alst, void (*del)(void *,
			size_t));

void					ft_lstadd(t_list **alst, t_list *new);

void					ft_lstiter(t_list *lst, void (*f)(t_list
			*elem));

t_list					*ft_lstmap(t_list *lst, t_list *
		(*f)(t_list *elem));

int						ft_str_is_lowercase(const char *str);

int						ft_str_is_uppercase(const char *str);

char					*ft_strrev(char *str);

void					ft_lstpushback(t_list **begin, t_list *new);

void					ft_lstremove(t_list **begin, t_list *lst,
				int (*cmp(t_list*, t_list*)), void (*del(t_list*)));

int						ft_char_position(const char *str, char c);

int						get_next_line(const int fd, char **line);

void					*ft_realloc(void *ptr, size_t prev_size,
												size_t new_size);

char					*ft_freestrjoin(char *s1, char *s2, int i);

char					*ft_strjoinch(char const *s1, char c);

char					*ft_freestrjoinch(char *s1, char ch);

int						ft_isspace(int ch);

char					*ft_pathcreator(char *s1, char *s2);

char					**ft_strsplitspace(char *str);

char					*ft_strreplace(char *str, char *term, char *replace_by);

int						ft_isemptystr(char *str, int consider_space);
#endif
