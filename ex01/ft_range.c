/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:43:36 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/28 09:44:25 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	range = ft_abs(max - min);
	arr = malloc(sizeof(int) * range);
	i = 0;
	j = min;
	while (i < range)
		arr[i++] = j++;
	return (arr);
}
