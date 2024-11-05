/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:15:19 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:27:28 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;
	int			i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	while (i < n - 1)
	{
		cdest[i] = csrc[i];
		i++;
	}
	dest = cdest;
	return (dest);
}
