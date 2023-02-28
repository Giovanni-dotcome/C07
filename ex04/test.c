#include "ft_convert_base.c"
#include <stdio.h>

int	main()
{
	char	*nbr = "1234";
	char	*base_from = "0123456789";
	char	*base_to = "01";
	char 	*res = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", res);
	return 0;
}
