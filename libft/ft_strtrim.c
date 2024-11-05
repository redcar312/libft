/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:27:32 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 14:54:49 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	get_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] != s1[i])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (i);
}

int	check_end(char const *s1, char const *set, int end_index)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[end_index] != set[i])
			i++;
		else
		{
			i = 0;
			end_index--;
		}
	}
	return (end_index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		len;
	int		end_index;
	int		start_index;
	int		i;

	len = get_len(s1);
	start_index = check_start(s1, set);
	end_index = check_end(s1, set, (len - 1));
	len = end_index - start_index;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (trimmed == NULL)
		return (0);
	while (i < len + 1)
	{
		trimmed[i] = s1[start_index];
		start_index++;
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
