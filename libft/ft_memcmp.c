/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:19:33 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 14:56:08 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*cstr1;
	char	*cstr2;
	int		i;

	i = 0;
	cstr1 = (char *)str1;
	cstr2 = (char *)str2;
	while (i < n)
	{
		if (cstr1[i] != cstr2[i])
			return (cstr1[i] - cstr2[i]);
		i++;
	}
	return (0);
}
