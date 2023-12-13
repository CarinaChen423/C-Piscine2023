/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:51:40 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/26 20:05:47 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size >= 0)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

/*#include <stdio.h>

int	main()
{
	int	tab[] = {4, 2, 3, 0};
	int	size = 4;
	int	a;

	a = 0;
	ft_sort_int_tab(tab, size);
	while (a < size)
	{
	printf("%d", tab[a]);
	a++;
	}
}*/
