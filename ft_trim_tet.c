/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_tet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:40:27 by cfu               #+#    #+#             */
/*   Updated: 2017/01/17 20:48:52 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_trim_tet(char *str, char c)
{
	char	*beg;
	char	*end;
	char	*max;

	if (!str || !c)
		return NULL;
	beg = ft_strchr(str, c);
	end = ft_strrchr(str, c);
	max = ft_strchr(str, '\0');
	ft_bzero(str, beg - str);
	ft_memmove(str, beg, end - beg);
	end = ft_strrchr(str, c);
	ft_bzero(end + 1, max - end);
	return (str);
}

int		main(void)
{
	char *str;
	char *newstring;
	
	str = "...#....#...##......";
	newstring = ft_trim_tet(str, '#');
	ft_putstr(newstring);
}
