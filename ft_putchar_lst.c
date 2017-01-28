/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_charlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:13:28 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:36:55 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_putchar_lst(t_list *begin_list)
{
	int	i;

	i = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			ft_putstr(begin_list->content);
			ft_putchar('\n');
			while (i < 4)
			{
				ft_putnbr(begin_list->char_spots[i]);
				ft_putchar('\n');
				i++;
			}
			ft_putchar(begin_list->letter);
			ft_putchar('\n');
			begin_list = begin_list->next;
		}
	}
}
