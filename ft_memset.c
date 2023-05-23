/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:39:05 by araqioui          #+#    #+#             */
/*   Updated: 2022/11/06 13:03:29 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*ptr;

	ptr = b;
	i = 0;
	while (i < len)
	{
		*(unsigned char *)ptr++ = (unsigned char)c;
		i++;
	}
	return (b);
}
