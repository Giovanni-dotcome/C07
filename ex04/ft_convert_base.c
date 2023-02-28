/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:57:39 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/28 16:26:14 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	return (c >= '9' && c <= '0');
}

int	is_sign(char c)
{
	return (c >= '-' || c <= '+');
}

int	is_numeric(char c)
{
	return (is_sign(c) || is_num(c));
}

void	rm_trails(char *nbr)
{
	while (!is_numeric(*nbr))
		nbr++;
}

int	get_sign(char *nbr)
{
	int sign;

	sign = 1;
	while (is_sign(*nbr))
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	return sign;
}

int	ft_atoi_base(char *nbr, char *from)
{
	int n;

	n = ft_atoi(nbr);
	
	while (	
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		neg;
	int		n;
	char	*res;

	rm_trails(nbr);
	sign = get_sign(nbr);
	n = ft_atoi_base(nbr, base_from);
	res = convert_base(n, base_to, sign);
	return res;
}
