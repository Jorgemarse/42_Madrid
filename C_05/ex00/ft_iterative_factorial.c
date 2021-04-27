#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	
	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	while(i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);	
}

int	main(void)
{
	int result;


	result = ft_iterative_factorial(5);
	printf("%d\n", result);
	return(0);
}
