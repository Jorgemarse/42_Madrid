#include<stdio.h>

int ft_recursive_factorial(int nb)
{
	int result;
	if (nb ==0)
		return (1);
	else
	{
		result = nb*ft_recursive_factorial(nb - 1);
		return(result);
	}
}

int main(void)
{
	int a;

	a = ft_recursive_factorial(1);
	printf("%d\n", a);
	return(0);
}
