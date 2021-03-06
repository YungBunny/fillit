/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getindx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 21:36:03 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 23:09:04 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_getindx(char *str)
{
	int	s;
	int	a;
	int	*arr;

	s = 0;
	a = 0;
	arr = (int *)malloc(sizeof(int) * 4);
	if (str)
	{
		while (str[s])
		{
			if (str[s] == '.')
				s++;
			else
			{
				arr[a++] = s;
				s++;
			}
		}
	}
	return (arr);
}
