/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:51:54 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/27 21:03:18 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char d[] = "123";
	char s[] = "string";
	char e[] = "";
	printf("%d\n", ft_str_is_numeric(d));
	printf("%d\n", ft_str_is_numeric(s));
	printf("%d\n", ft_str_is_numeric(e));
}*/
