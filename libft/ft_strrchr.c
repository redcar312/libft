/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:37:01 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:19:23 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(char *str, int c)
{
	int	str_len;

	str_len = get_len(str) - 1;
	while (str[str_len])
	{
		if (str[str_len] == c)
			return (&str[str_len]);
		str_len--;
	}
	return (0);
}
