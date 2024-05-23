/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:12:51 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 07:17:13 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*renv;
	int		i;

	i = 0;
	renv = (char *)malloc(ft_strlen((char *)s) + 1);
	if (renv == NULL)
	{
		free(renv);
		return (NULL);
	}
	while (s[i])
	{
		renv[i] = s[i];
		i++;
	}
	renv[i] = '\0';
	return (renv);
}

// int main(void)
// {
//     printf("%s", ft_strdup("test"));
//     printf("\n");
//     printf("%s", strdup("test"));
//     printf("\n");
//     return (0);
// }