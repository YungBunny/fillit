/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 17:37:40 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(int fd)
{
	char	*res;
	int		valid;

	res = ft_gettet(fd);
	valid = 0;
	valid = ft_validate_tets(res);
	ft_pound_to_letter(res);
	ft_putstr(res);
	ft_putchar('\n');
	ft_putnbr(valid);
}
