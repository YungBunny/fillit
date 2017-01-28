/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 19:21:21 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solver(char *brd, t_list tet, int spot, size_t boardsz)
{
	int		l;
	int		u;
	int		next;
	int		count;
	static int	i;

	l = -1;
	u = 4;
	next = spot + 1;
	count = 0;
	if (!i)
		i = 0;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (tet.char_spots[i])
	{
		while (tet.char_spots[i] > l && tet.char_spots[i] < u)
		{
			tet.char_spots[i] = tet.char_spots[i] - (count * 4);
			if (brd[spot + tet.char_spots[i]] == '.')
				i++;
			else
			{
				spot++;
				ft_solver(&brd[next], tet, next, boardsz);
			}
		}
		count++;
		spot = spot + (int)boardsz;
		l += 4;
		u += 4;
	}
	return (1);
}
