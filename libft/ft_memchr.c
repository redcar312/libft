/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:31:56 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:15:17 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*cstr;
	int					i;

	i = 0;
	cstr = (unsigned char *)str;
	while (i < n)
	{
		if (cstr[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
