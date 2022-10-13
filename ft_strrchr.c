/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:59:13 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/08 01:59:16 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	ctn;
	int	size;

	i = 0;
	ctn = 0;
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] == c)
			ctn = i;
		i++;
	}
	if (ctn != 0)
		return ((char *)&s[ctn]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	printf("%s\n", strrchr("Hello World", '\0'));
// 	printf("%s\n", ft_strrchr("Hello World", '\0'));
// }
