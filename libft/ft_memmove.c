/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:51:04 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:10:10 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;
	int			i;

	csrc = src;
	cdest = dest;
	i = 0;
	if (dest > src)
	{
		while (n--)
		{
			cdest[n] = csrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			cdest[i++] = csrc[i++];
		}
	}
	dest = cdest;
	return (dest);
}
