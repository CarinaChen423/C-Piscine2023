/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:30:53 by zhchen            #+#    #+#             */
/*   Updated: 2023/11/24 21:41:21 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_all_chars(char a, char b, char c)
{
	ft_print_char(a + '0');
	ft_print_char(b + '0');
	ft_print_char(c + '0');
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_all_chars(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					ft_print_char(',');
					ft_print_char(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
