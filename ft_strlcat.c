/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:50:50 by sperron           #+#    #+#             */
/*   Updated: 2024/05/20 15:39:24 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	i = 0;
	while (dst[length] && length < size)
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dst[length + i] = src[i];
		i++;
	}
	if (length < size)
		dst[length + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}
