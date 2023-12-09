/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:04:20 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/27 21:10:04 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char l[] = "abc";
	char u[] = "ABC";
	char d[] = "123...";
	char e[] = "";
	printf("%d\n", ft_str_is_lowercase(l));
	printf("%d\n", ft_str_is_lowercase(u));
	printf("%d\n", ft_str_is_lowercase(d));
	printf("%d\n", ft_str_is_lowercase(e));
}*/
