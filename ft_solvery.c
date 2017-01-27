/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/26 22:42:22 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			ft_solver(char *brd, t_list *tet, int *valid, int spot, size_t boardsz)
{
	int		i;
	int		l;
	int		u;
	int		next;
	int		count;

	i = 0;
	l = -1;
	u = 4;
	next = spot + 1;
	count = 0;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (tet->char_spot[i])
	{
		while (tet->char_spot[i] > l && tet->char_spot[i] < u)
		{
			tet->char_spot[i] = tet->char_spot[i] - (count * 4);
			if (brd[spot + tet->char_spot[i]] == '.')
				tet->char_spot++;
			else
			{
				spot++;
				ft_solver(&brd[next], &char_spot, next, boardsz);
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
	return (0);
}
