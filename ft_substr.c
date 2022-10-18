/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <rouarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:54:48 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/15 14:11:07 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sghir(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;
	size_t			m;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		m = 0;
	else
		m = sghir(ft_strlen(s) - start, len);
	str = malloc(m + 1);
	if (!str)
		return (NULL);
	while (i < m)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
