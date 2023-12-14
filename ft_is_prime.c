/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:44:41 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/05 16:55:35 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			prime++;
		}
		i++;
	}
	if (prime == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>

int	main()
{
	printf("%i\n", ft_is_prime(2));
	printf("%i\n", ft_is_prime(1));
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(3));
	printf("%i", ft_is_prime(4));
}*/
