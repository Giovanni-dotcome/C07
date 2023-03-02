#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main()
{
	// nbr = 0; nbr = INT_MIN
	// wrong base: len 0 or len 1, same values, value + or -
	char	*nbr = "222222222222222222";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789abcdef";
	char 	*res = ft_convert_base(nbr, base_from, base_to);
	return 0;
}
