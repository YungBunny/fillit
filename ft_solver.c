/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 16:10:08 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solver(char *brd, t_list *tet, int spot, size_t boardsz)
{
	int		l;
	int		u;
	int		next;
	int		count;

	l = -1;
	u = 4;
	next = spot + 1;
	count = 0;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (tet->char_spots)
	{
		while (tet->char_spots > l && tet->char_spots < u)
		{
			tet->char_spots = tet->char_spots - (count * 4);
			if (brd[spot + tet->char_spots] == '.')
				tet->char_spots++;
			else
			{
				spot++;
				ft_solver(&brd[next], &*tet, next, boardsz);
			}
		}
		count++;
		spot = spot + (int)boardsz;
		l += 4;
		u += 4;
	}
	return (1);
	}
}
