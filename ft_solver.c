/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/24 21:16:33 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_solver(char *brd, int *arr, int spot);
{
	int		next;

	next = spot + 1;
	while (brd[spot])
	{
		t = 0;
		while (*arr)
		{
			if (*arr < 4 || (*arr > 3 && *arr < 8) || (*arr > 7 && *arr < 12)
				   	|| (*arr > 11 && *arr < 16))
				brd[spot] = ft_strchr(brd[spot], '\n') + 1;
			if (brd[spot + *arr] == '.')
				arr++;
			if (brd[spot + *arr] != '.')
				ft_checkspot(&brd[next], tet);
			/*condition that checks if the array is read through and the offset points are cleared, then call the function with the next tet.
			 */
			else
				return (0);
		}
	}
}
}
