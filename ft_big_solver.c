/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:59:55 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 00:29:43 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_big_solver(char *brd, t_list **tet, int spot)
{
	int		*chars;
	int		*off_set;
	int		next;


	chars = ft_getindx(tet->content);
	off_set = ft_getoffset(tet->content);
	next = spot + 1;
	while (*tet)
	{
		if (ft_solver(brd, chars, off_set, spot) == 1)
		{
			tet = tet->next;
			ft_big_solver(&brd[0], *tet, spot);
		}
		else
			ft_big_solver(&brd[next], *tet, next);
}
