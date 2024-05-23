/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:12:07 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 08:06:26 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size != 0 && nmemb > ((size_t) -1 / size))
	{
		return (NULL);
	}
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
