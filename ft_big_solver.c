/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:59:55 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:50:28 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_big_solver(char *brd, t_list *tet, int spot)
{
	int		board_size;
	int		next;

	board_size = ft_getboardsz(ft_list_size(tet));
	next = spot + 1;
	while (tet)
	{
		if (ft_solver(brd, *tet, spot, board_size, tet->letter) == 1)
		{
			tet = tet->next;
			ft_big_solver(&brd[0], tet, spot);
		}
		else
			ft_big_solver(&brd[next], tet, next);
	}
}
