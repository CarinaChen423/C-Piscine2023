/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:04:58 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/12 16:34:43 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*#include <stdio.h>

int	main()
{
	int	*result;
	int	min = 5;
	int	max = 10;

	int	size = ft_ultimate_range(&result, min, max);
	if (size != -1)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");
	}else
		printf("Invalid input");
	return (0);
}*/
