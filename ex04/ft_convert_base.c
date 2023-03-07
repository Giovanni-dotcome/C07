/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:57:39 by gde-vito          #+#    #+#             */
/*   Updated: 2023/03/06 09:25:26 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		is_sign(char c);
int		ft_strlen(char *str);

void	get_num(char **nbr, char *base);

void	get_sign(char **nbr, int *sign);

int		char_in_str(int v, char c, char *str);

int	base_is_correct(char *base)
{
	int	i;
	int	seen[256] = {0};

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (is_sign(base[i]) || seen[base[i]])
			return (0);
		seen[base[i++]]++;
	}	
	return (1);
}

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

unsigned int	atoi_base_to_ten(char *nbr, char *base)
{
	int				i;
	unsigned int	n;
	unsigned int	val;
	unsigned int	b;

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

char	*itoa_ten_to_base(unsigned int num, char *base, int sign)
{
	int	b;
	int i;
	char *arr;
	int	len_arr;

	b = ft_strlen(base);
	len_arr = ft_log(num, b) + sign;
	arr = malloc(len_arr);
	i = len_arr - 1;
	if (!num)
		return "0";
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

	if (!base_is_correct(base_from) || !base_is_correct(base_to))
		return (0);

	get_num(&nbr, base_from);
	get_sign(&nbr, &sign);

	num_ten = atoi_base_to_ten(nbr, base_from);
	arr_base = itoa_ten_to_base(num_ten, base_to, sign);

	return (arr_base);
}