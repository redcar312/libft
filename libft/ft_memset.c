/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:03 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:16:18 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t size)
{
	char	*copy;
	int		i;

	copy = str;
	i = 0;
	while (i < size)
	{
		copy[i] = c;
		i++;
	}
	str = copy;
	return (str);
}
