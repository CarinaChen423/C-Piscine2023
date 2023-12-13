/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:42:46 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/26 17:59:31 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = temp / *b;
		*b = temp % *b;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("After division: %d, modules: %d", x, y);
}*/
