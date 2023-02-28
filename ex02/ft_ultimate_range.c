/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:46:36 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/28 14:07:28 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <limits.h>

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	ft_ultimate_range(int **arr, int min, int max)
{
	int	i;
	int	range;

	range = ft_abs(max - min);
	if (malloc(range * sizeof(int)) == NULL)
		return (-1);
	if (min >= max)
	{
		arr = 0;
		return (0);
	}
	*arr = (int *) malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		(*arr)[i] = min + i;
		i++;
	}
	return (range);
}
