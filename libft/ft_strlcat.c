/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:06:56 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 12:29:07 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	get_len(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	total;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = get_len(src);
	dest_len = get_len(dest);
	total = src_len + dest_len;
	if (size < 1)
		return (size + src_len);
	while (src[i] && dest_len < size - 1)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	if (size < dest_len)
		return (src_len + size);
	return (total);
}
