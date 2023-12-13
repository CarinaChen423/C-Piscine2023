/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:36:08 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/26 19:47:39 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*#include <stdio.h>

int	main()
{
int	array[] = {1, 2, 3, 4, 5};
	int	size;
	int	a;

	a = 0;
	size = 5;
	ft_rev_int_tab(array, size);
	while (a < size)
	{
		printf("%d", array[a]);
		a++;
	}
}*/
