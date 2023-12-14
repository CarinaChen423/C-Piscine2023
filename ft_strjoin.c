/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:50:17 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/13 20:07:07 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	len += str_len(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

/*int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	//strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	//strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	//strs[2] = (char *)malloc(sizeof(char) * 15 + 1);
	strs[0] = "Hello";
	strs[1] = "world,";
	strs[2] = "Here is new era";
	separator = " - - ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
