/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 06:54:15 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 07:46:32 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (ft_strlen(search) == 0)
		return ((char *) src);
	len_n = ft_strlen(search);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] && src[i + j] == search[j] && i + j < len)
			j++;
		if (j == len_n)
			return ((char *) src + i);
		i++;
	}
	return (NULL);
}
