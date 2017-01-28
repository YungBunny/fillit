/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/28 03:43:25 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			ft_solverthatworks(char *brd, int *chars, int *off_sets, char c, int spot, size_t boardsz)
{
	int		l;
	int		u;
	int		next;
	int		count;
	static int	i;
	int		*ptr;
	int		add;

	l = -1;
	u = 4;
	next = spot + 1;
	count = 0;
	ptr = &chars[i];
	add = 0;
	if (!i)
		i = 0;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (i < 4)
	{
		while (chars[i] > l && chars[i] < u)
		{
			add = chars[i] - (count * 4);
			if (brd[spot + add] == '.')
			{
				brd[spot + add] = c;
				i++;
				ptr = &chars[i];
			}
			else
			{
				if (i != 0)
					ft_clearbrd(brd, c);
				spot++;
				ft_solverthatworks(brd, chars, off_sets, c, next, boardsz);
			}
		}
		count++;
		spot = spot + (int)boardsz + 1;
		l += 4;
		u += 4;
	}
	return (1);

}

int		main(void)
{
	char	*brd;
	char	*tet;
	int		*arr1;
	int		*arr2;
	char	c;
	int		i;

	brd = ft_strdup("ABB.\nAABB\nA...\n....\n");
	tet = ft_strdup("C...CCC");
	arr1 = ft_getindx(tet);
	arr2 = ft_getoffset(tet);
	c = ft_gettag(tet);
	i = 0;
	while (i < 4)
	{
		ft_putnbr(arr1[i]);
		ft_putchar('\n');
		i++;
	}
	printf("%d", ft_solverthatworks(brd, arr1, arr2, c, 0, 4));
	ft_putstr(brd);
	return (0);
}
