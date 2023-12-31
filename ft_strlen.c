/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:24:14 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/02 17:37:49 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}

/*#include <stdio.h>

int	main()
{
	char t[] = "Hello";
	printf("%d", ft_strlen(t));
}*/
