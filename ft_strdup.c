/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:29:04 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/13 20:13:20 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcp(char *src1, char*src2)
{
	int	i;

	i = 0;
	while (src1[i])
	{
		src2[i] = src1[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

char	*ft_strdup(char *src)
{
	char	*n;

	n = ((char *)malloc(ft_strlen(src) * sizeof(char) + 1));
	if (!n)
	{
		return (NULL);
	}
	ft_strcp(src, n);
	return (n);
}

/*int	main(void)
{
	char	*str;
	char	*allo;

	str = "Hello World!";
	printf("%s, %p\n", str, str);
	allo = ft_strdup(str);
	printf("%s, %p\n", allo, allo);
	allo = strdup(str);
	printf("%s, %p", allo, allo);
}*/
