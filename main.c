/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:31 by cfu               #+#    #+#             */
/*   Updated: 2017/01/17 19:33:17 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*res;
	int		valid;

	fd = open(argv[1], O_RDONLY);
	res = NULL;
	valid = 0;
	if (argc < 1)
	{
		free(res);
		return (0);
	}
	res = ft_gettet(fd);
	valid = ft_validate_tets(res);
	return (valid);
}
