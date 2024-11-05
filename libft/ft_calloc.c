/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:39:44 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:04:25 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *buffer, size_t n)
{
	char	*copy;
	int		i;

	i = 0;
	copy = buffer;
	while (i < n)
	{
		copy[i] = '\0';
		i++;
	}
	buffer = copy;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (size && (size * nitems) / size != nitems)
		return (0);
	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	ptr = malloc(nitems * size);
	if (ptr)
		ft_bzero(ptr, nitems);
	return (ptr);
}
