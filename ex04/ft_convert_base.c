/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:57:39 by gde-vito          #+#    #+#             */
/*   Updated: 2023/03/02 10:05:51 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);

void	get_num(char **nbr, char *base);

void	get_sign(char **nbr, int *sign);

int		char_in_str(int v, char c, char *str);

int	ft_log(int base, int exp)
{
	int i;

	i = 0;
	while (base)
	{
		base /= exp;
		i++;
	}

	return i;
}

int	atoi_base_to_ten(char *nbr, char *base)
{
	int i;
	int	n;
	int	val;
	int b;

	i = 0;
	n = 0;
	b = ft_strlen(base);
	while (nbr[i] && char_in_str(0, nbr[i], base))
	{
		n *= b;
		val = char_in_str(1, nbr[i++], base);
		n += val;
	}

	return n;
}

char	*itoa_ten_to_base(int num, char *base, int sign)
{
	int	b;
	int i;
	char *arr;
	int	len_arr;

	b = ft_strlen(base);
	len_arr = ft_log(num, b) + sign;
	arr = malloc(len_arr);
	i = len_arr - 1;
	while (num)
	{
		arr[i--] = base[(num % b)];
		num /= b;
	}
	if (sign)
		arr[0] = '-';
	return arr;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		num_ten;
	char	*arr_base;

	get_num(&nbr, base_from);
	get_sign(&nbr, &sign);

	num_ten = atoi_base_to_ten(nbr, base_from);
	arr_base = itoa_ten_to_base(num_ten, base_to, sign);

	// printf("nbr:%s\n", nbr);
	// printf("num_ten:%d\n", num_ten);
    printf("arr_base:%s\n", arr_base);

	return arr_base;
}