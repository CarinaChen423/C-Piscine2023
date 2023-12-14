/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:38:15 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/08 20:57:17 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	printf("%i\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-1));
	printf("%d", ft_sqrt(0));
	return (0);
}*/
