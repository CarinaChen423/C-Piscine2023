/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:30:06 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/08 18:37:29 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (result);
}

/*#include <stdio.h>

int	main()
{
	printf("%i", ft_iterative_power(3,4));
}*/
