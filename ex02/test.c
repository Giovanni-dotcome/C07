#include "ft_ultimate_range.c"
#include <stdio.h>

void	printA(int	*arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int	main()
{
	int *arr1;
	int *arr2;
	int	*arr3;

	int l1 = ft_ultimate_range(&arr1, 2, 7);
	int l2 = ft_ultimate_range(&arr2, -1, 2);
	int l3 = ft_ultimate_range(&arr3, 7, 7);
	
	printA(arr1, l1);
	printA(arr2, l2);
	printA(arr3, l3);

	return 0;
}
