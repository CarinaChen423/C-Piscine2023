/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:50:24 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/08 18:57:08 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_find_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	printf("%i\n", ft_find_next_prime(2));
	printf("%i\n", ft_find_next_prime(3));
	printf("%i", ft_find_next_prime(4));
}*/
