/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:23:22 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/28 17:29:33 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char t[] = "abc";
	char g[] = "HelLo";
	printf("%s\n", ft_strupcase(t));
	printf("%s\n", ft_strupcase(g));
}*/
