/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:23:25 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:28:40 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	start = start - 1;
	if (substr == NULL)
		return (0);
	while (i < len)
	{
		substr[i] = s[start++];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
