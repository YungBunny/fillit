/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 20:28:39 by cfu               #+#    #+#             */
/*   Updated: 2017/01/16 19:13:25 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_gettet(int fd)
{
	char	*tet;
	size_t	rbyt;

	tet = ft_strnew(BUFF_SIZE);
	rbyt = read(fd, tet, BUFF_SIZE);
	ft_repchar(tet, '\n', '.', BUFF_SIZE);
	return (tet);
}
