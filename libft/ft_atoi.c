/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:11:35 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/11/05 15:18:39 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_sum(char *str, int is_neg)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (i > 0)
			sum *= 10;
		sum += (str[i] - 48);
		i++;
	}
	if (is_neg)
		return (sum * -1);
	return (sum);
}

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			return (calc_sum(&str[i + 1], 1));
		if (str[i] == '+')
			return (calc_sum(&str[i + 1], 0));
		if (str[i] != 32)
			return (calc_sum(&str[i], 0));
		i++;
	}
}
