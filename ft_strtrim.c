/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:45:31 by araqioui          #+#    #+#             */
/*   Updated: 2022/10/21 11:41:27 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		end;
	size_t		total;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && check_char(s1[start], set) == 1)
		start++;
	while (end - 1 >= start && check_char(s1[end - 1], set) == 1)
		end--;
	total = end - start;
	str = malloc((total + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s1 + start, total);
	str[total] = '\0';
	return (str);
}
