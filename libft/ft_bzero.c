/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:48:30 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:05:51 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
