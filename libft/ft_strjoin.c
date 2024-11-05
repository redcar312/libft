/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:47:14 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:01:05 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = get_len(s1);
	s2_len = get_len(s2);
	i = 0;
	str = (char *)malloc((s1_len + s2_len) * sizeof(char));
	if (str == NULL)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[s1_len++] = s2[i];
		i++;
	}
	str[s1_len] = '\0';
	return (str);
}
