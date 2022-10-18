/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouarrak <rouarrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:45:01 by rouarrak          #+#    #+#             */
/*   Updated: 2022/10/16 16:36:23 by rouarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include<string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return (res * s);
}
	// if (res <= -2147483648)
	// 	return (0);
	// if(res > 2147483647)
	// 	return (-1);
// int main()
// {
// 	printf("%d\n",ft_atoi("99999999994442459999999"));
// 	printf("%d",atoi("99999999994442459999999"));
// }