/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:19:34 by gde-vito          #+#    #+#             */
/*   Updated: 2023/03/06 09:25:27 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_strlen(char *str)
{
     int l;

    l = 0;
    while (str[l])
        l++;
    return l;
}

 int	char_in_str(int v, char c, char *str)
{
	 int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			if (v)
				return i;
			else 
				return 1;
		}
        i++;
	}
	return 0;
} 

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

void	get_num(char **nbr, char *base)
{
	while (**nbr && !is_sign(**nbr) && !char_in_str(0, **nbr, base))
		(*nbr)++;
}

void	get_sign(char **nbr, int *sign)
{
	*sign = 0;
	while (**nbr && is_sign(**nbr))
	{
		if (**nbr == '-')
			*sign = !*sign;
		(*nbr)++;
	}
}
