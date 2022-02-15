/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:01:40 by rdanyell          #+#    #+#             */
/*   Updated: 2022/02/11 16:23:12 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_atoi_ps(const char *str);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int n);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp( const char *s1, const char *s2, size_t num );
int			ft_memcmp(const void *s1, const void *s2, size_t n);

size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_strlen(const char *str);

void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		ft_bzero(void *a, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

char		*ft_itoa(int n);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
char		*ft_strrchr(const char *str, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		**ft_split(char const *s, char c);

int			ft_strlen_gnl(char *str);
int			get_next_line(int fd, char **line);
char		*ft_strchr_gnl(const char *s, int c);

size_t	ft_putchar_len(char c);
size_t	ft_putstr_len(char *s);
size_t	ft_putnbr_len(int n);
size_t	ft_putnbru_len(unsigned int n);
size_t	ft_putnbrhex_low(unsigned long n);
size_t	ft_putnbrhex_high(unsigned long n);
size_t	ft_pointer(unsigned long p);
int		ft_printf(const char *str, ...);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif	
#endif