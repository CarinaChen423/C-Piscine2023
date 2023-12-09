/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:36:52 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/27 20:50:26 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&&!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char str[] = "AS";
	char sss[] = "&!";
	char ddd[] = "123";
	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(sss));
	printf("%d\n", ft_str_is_alpha(ddd));

}*/
