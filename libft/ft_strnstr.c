/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:58:53 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:17:21 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_present(char *str, char *substr, int chars_left)
{
	int	i;

	i = 0;
	while (substr[i])
	{
		if (substr[i] != str[i] || i > chars_left - 1)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(char *str, char *substr, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (substr == "")
		return (str);
	while (i < n)
	{
		if (str[i] == substr[0])
		{
			j = n - i;
			if (is_present(&str[i], substr, j))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
