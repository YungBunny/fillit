/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 20:28:39 by cfu               #+#    #+#             */
/*   Updated: 2017/01/13 21:08:06 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_gettet(int fd)
{
	char	*tet;
	size_t	rbyt;


	tet = ft_strnew(BUFF_SIZE);
	rbyt = read(fd, tet, BUFF_SIZE);
	ft_repchar(tet);
	return (tet);
}

static void	ft_repchar(char *str, char o, char n, int max)
{
	int	i;

	i = 0;
	while (i <= max)
	{
		if ((i % 5 == 0 || i == 21) && str[i] == o)
			str[i] = n;
		i++;
	}
	ft_trim_tet(str);
}

char	*ft_trim_tet(char *str, char c)
{
	size_t	s;
	size_t	f;
	size_t	i;
	char	*res;

	s = 0;
	f = ft_strlen(str) - 1;
	i = 0;
	if (!str || !src)
		return (NULL);
	while (str[s] != c)
		s++;
	while (str[f] != c)
		f--;
	while (s <= f)
	{
		res[i] = str[s++];
	}
	return (res);
}

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		res;
	int		num;

	res = 0;
	num = 0;
	line = NULL;
	argc = 0;
	fd = open(argv[1], O_RDONLY);
	char *res = ft_strnew(sizeof(char) * BUFF_SIZE);
	res = ft_gettet(fd);
	ft_putstr(res);
	return (0);
}
