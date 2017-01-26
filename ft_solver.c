/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/26 03:52:06 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			ft_solver(char *brd, int *chars, int *off_sets, char c, int spot, size_t boardsz)
{
	int		a;
	int		l;
	int		u;

	a = 0;
	l = 3;
	u = 8;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (a <= 3)
	{
		while (chars[a] > l && chars[a] < u)
		{
			if (brd[spot + a] == '.')
				a++;
			else
			{
				spot++;
				ft_solver(&brd[spot], chars, off_sets, c, spot, boardsz);
			}
		}
		spot = spot + (int)boardsz + 1;
		l += 4;
		u += 4;
	}
	if (ft_checkoffsets(&brd[spot], off_sets, spot) == 1)
		return (1);
}

int		main(void)
{
	char	*brd;
	char	*tet;
	int		*arr1;
	int		*arr2;
	char	c;

	brd = ft_strdup("ABB.\nAABB\nA...\n....\n");
	tet = ft_strdup("C...CCC");
	arr1 = ft_getindx(tet);
	arr2 = ft_getoffset(tet);
	c = ft_gettag(tet);
	printf("%d", ft_solver(brd, arr1, arr2, c, 0, 4));
}
