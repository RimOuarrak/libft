/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <rouarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:35 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/14 03:38:38 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;
	if (size * count > UINT64_MAX)
	
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count);
	return (ptr);
}
