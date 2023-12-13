/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:52:22 by zhchen            #+#    #+#             */
/*   Updated: 2023/12/02 15:56:08 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}

/*#include <stdio.h>
int	main()
{
	char s[] = "shau";
	char d[] = "oq";
	printf("%d", ft_strncmp(s, d, 1));

}*/
