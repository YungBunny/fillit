/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:36:46 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 22:08:43 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_make_board(size_t size)
{
	char *str;
	char *res;

	str = ft_strnew(size * size);
	res = str;
	while (*str)
	{
		*str = '.';
		str++;
	}
	return (res);
}
