/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:49:59 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/11 18:28:04 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}

int	main()
{
	char t[] = "Hello, Jane!";
	char y[] = "al";
	char *result = ft_strstr(t, y);
	if (result != NULL)
	{
		printf("Substring found: %s\n", result);
	} else {
		printf("substring not found. %s", result);
	}
	return 0;
}
