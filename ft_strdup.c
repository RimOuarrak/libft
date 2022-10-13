/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:48:17 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/12 21:48:19 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*ptr;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	ptr = (char *)malloc(l + 1);
	if (!ptr)
		return (0);
	while (i <= l)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
