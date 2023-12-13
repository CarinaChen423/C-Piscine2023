/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:07:23 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/26 18:02:29 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div_result;
	int	mod_result;

	a = 4;
	b = 2;
	ft_div_mod(a, b, &div_result, &mod_result);
	printf("%d divide by %d = %d, modules is %d", a, b, div_result, mod_result);
}*/
