/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:17:39 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/02 18:39:22 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char t[21] = "Hi, How are you";
	char y[] = "? Good";
	printf("%s", ft_strncat(t, y, 2));
	return 0;
}*/
