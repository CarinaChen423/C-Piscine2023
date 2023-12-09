/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:53:19 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/29 15:17:27 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	a[] = "sqq";
	char	b[] = "\n\t\v\f";
	char	e[] = "";
	printf ("%d\n", ft_str_is_printable(a));
	printf ("%d\n", ft_str_is_printable(b));
	printf ("%d\n", ft_str_is_printable(e));
	
}*/
