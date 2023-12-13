/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:59:30 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/04 18:48:16 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>
int	main(void)
{
	int	*nbr;
	int	number;

	number = 10;
	nbr = &number;
	printf("%d\n", *nbr);
	ft_ft(nbr);
	printf("%d", number);
}
