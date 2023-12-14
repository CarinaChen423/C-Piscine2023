/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:06:44 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/04 19:12:19 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int	main()
{
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(4));
	printf("%i\n", ft_fibonacci(5));
}*/
