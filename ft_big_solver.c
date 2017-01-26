/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:59:55 by cfu               #+#    #+#             */
/*   Updated: 2017/01/26 03:52:11 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_big_solver(char *brd, t_list *tet, int spot)
{
	int		*chars;
	int		*off_sets;
	char	c;
	int		next;


	chars = ft_getindx(tet->content);
	off_sets = ft_getoffset(tet->content);
	c = tet->letter;
	next = spot + 1;
	while (tet)
	{
		if (ft_solver(brd, chars, off_sets, c, spot) == 1)
		{
			tet = tet->next;
			ft_big_solver(&brd[0], tet, spot);
		}
		else
			ft_big_solver(&brd[next], tet, next);
	}
}
