#include "ft_strjoin.c"
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char **strgs;
	int	size = 3;
	char *sep = "SEP"; 
	strgs = malloc(sizeof(char *)*size);
	for (int i = 0; i < size; i++)
		strgs[i] = malloc(sizeof(char)*3);
	strgs[0][0] = 'a';
	strgs[0][1] = 'b';
	strgs[0][2] = 'c';
	strgs[1][0] = 'd';
	strgs[1][1] = 'e';
	strgs[1][2] = 'f';
	strgs[2][0] = 'g';
	strgs[2][1] = 'h';
	strgs[2][2] = 'i';

	char *res = ft_strjoin(3, strgs, sep);
	printf("%s\n", res);
	return 0;
}
