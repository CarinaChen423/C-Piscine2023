/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:15:32 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/26 18:34:51 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main()
{
	char	*test;
	int	counter;

	test = "Counting";
	ft_strlen(test);
	counter = ft_strlen(test);
	printf("Result is: %d", counter);
}*/
