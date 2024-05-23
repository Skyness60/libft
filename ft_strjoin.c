/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:34:41 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 09:12:30 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		dest_len;
	int			i;
	char		*dest;
	int			j;

	dest_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (dest_len + 1));
	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
		dest[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}
