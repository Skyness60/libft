/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:02:15 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 11:11:30 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = ft_strdup(s);
	i = 0;
	if (result)
	{
		while (s[i] != '\0')
		{
			result[i] = f(i, result[i]);
			i++;
		}
	}
	return (result);
}
