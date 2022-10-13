/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:25:27 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/12 23:25:29 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (!s)
		return (0);
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == c)
			return ((unsigned char *)str);
		n--;
		str++;
	}
	return (0);
}
