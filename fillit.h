/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 17:59:29 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

static char *v_tets[] = {"####", "#....#....#....#", "#....#....##",
						"##...#....#", "##....#....#", "#....#...##",
						"###..#", "###....#", "#....###", "#..###",
					   	"#....##...#", "#...##....#", "###...#",
					   	"#...###", "##....##", "##..##", "#....##....#",
					   	"#...##...#", "##...##"};

void 				ft_repchar(char *str, char o, char n, int max);
char				*ft_gettet(int fd);
char				*ft_trim_tet(char *str, char c);
char				*ft_strnew(size_t size);
size_t				ft_strlen(const char *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_validate_tets(char *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_putnbr(int n);
void				ft_pound_to_letter(char *str);
void				ft_fillit(int fd);

#endif
