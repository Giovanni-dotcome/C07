/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:46:36 by gde-vito          #+#    #+#             */
/*   Updated: 2023/03/02 18:36:46 by gde-vito         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range;

	rng = ft_abs(max - min);
	if (malloc(rng * sizeof(int)) == NULL)
		return (-1);
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * rng);
	i = 0;
	while (i < range)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (rng);
}
