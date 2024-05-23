/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:53:19 by sperron           #+#    #+#             */
/*   Updated: 2024/05/22 15:51:50 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in(const char *str, char c)
{
	while (*str && c != *str)
		str++;
	return (c == *str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;

	first = 0;
	last = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (in(set, s1[first]))
		first++;
	if (first == last)
		return (ft_strdup(""));
	while (in(set, s1[last - 1]))
		last--;
	return (ft_substr(s1, first, (last - first)));
}
