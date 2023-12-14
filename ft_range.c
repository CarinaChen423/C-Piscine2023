/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:06:00 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/12 16:23:26 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*result;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	result = (int *)malloc(range * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (i < range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
