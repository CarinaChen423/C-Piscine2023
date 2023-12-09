/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:17:59 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/28 16:51:56 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char test[] = "AS";
	char try[] = "sA";
	char d[] = "126.";
	printf("%d\n", ft_str_is_uppercase(test));
	printf("%d\n", ft_str_is_uppercase(try));
	printf("%d\n", ft_str_is_uppercase(d));
}*/
