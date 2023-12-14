/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:38:33 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/03 15:15:54 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	f;

	f = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}

/*#include <stdio.h>

int	main()
{
	printf("%d", ft_iterative_factorial(6));
}*/
