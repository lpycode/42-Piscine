

#include <stdio.h>

void	test(int j, int *i)
{
	*i += 1;
	j += 1;
}

int	main(void)
{
	int	i;
	int j;

	i = 1;
	j = 1;


	printf("%d %d\n", j, i);
	test(j, &i);
	printf("%d %d", j, i);

	return (0);
}
