#include "ft_range.c"
#include <stdio.h>

void	printA(int	*arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int	main()
{
	int	*test1 = ft_range(2, 7);
	int	*test2 = ft_range(7, 7);
	int	*test3 = ft_range(-7, 7);
	int size1 = 7 - 2;
	int size2 = 7 - 7;
	int size3 = abs(-7 - 7);
	printA(test1, size1);
	printA(test2, size2);
	printA(test3,  size3);
	return 0;
}
