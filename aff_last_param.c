/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:29:53 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/14 20:35:57 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[ac - 1][i] != '\0')
	{
		write(1, &av[ac - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
