/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:03:14 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/13 12:03:17 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len -1];
			len--;
		}
	}
	else if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[] = "abc";
//     char str2[] = "abc";
//     printf ("dyalhom: %s\n",memmove(str1, "",1));
// 	printf ("dyalna: %s\n",ft_memmove(str1, "",1));
// }