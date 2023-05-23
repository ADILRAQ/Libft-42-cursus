/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:18:30 by araqioui          #+#    #+#             */
/*   Updated: 2022/10/21 10:03:05 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;
	void	*ptr;

	ptr = s;
	i = 0;
	while (i < len)
	{
		*(unsigned char *)ptr++ = '\0';
		i++;
	}
}
