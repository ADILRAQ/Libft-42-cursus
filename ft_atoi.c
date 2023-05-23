/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:14:08 by araqioui          #+#    #+#             */
/*   Updated: 2022/11/03 17:25:24 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int			sign;
	long long	res;
	long long	last;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		last = res;
		res = res * 10 + *str - 48;
		if (last != res / 10 && sign == 1)
			return (-1);
		else if (last != res / 10 && sign == -1)
			return (0);
		str++;
	}
	return (res * sign);
}
