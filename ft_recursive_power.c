/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:37:23 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/04 19:17:20 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else
		if (power == 0)
			return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main()
{
	printf("%i", ft_recursive_power(2, 3));
}*/
