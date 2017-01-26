/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 21:04:25 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solver(char *brd, int *chars, int *off_sets, char c,  int spot)
{
	int		next;
	int		a;
	int		o;

	next = spot + 1;
	a = 0;
	o = 0;
	while (brd[spot])
	{
		while (chars[a])
		{
			if (a < 4 || (a > 3 && a < 8) || (a > 7 && a < 12)
				   	|| (a > 11 && a < 16))
				brd[spot] = *(ft_strchr(&brd[spot], '\n') + 1);
			if (brd[spot + a] == '.')
				a++;
			if (brd[spot + a] != '.')
				ft_solver(&brd[next], chars, off_sets, c, next);
			if (brd[spot + o])
				o++;
			else
				return (0);
		}
	}
	return (1);
}
