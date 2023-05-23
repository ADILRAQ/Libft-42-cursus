/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:17:09 by araqioui          #+#    #+#             */
/*   Updated: 2022/10/20 12:51:29 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = len;
	if (src < dst)
	{
		while (i > 0)
		{
			*((unsigned char *)dst + i - 1) = *((unsigned char *)src + i - 1);
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
