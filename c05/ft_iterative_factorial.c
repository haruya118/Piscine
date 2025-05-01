#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int result;
	result = 1;
	if(nb == 0)
		return(1);
	while(nb >= 1)
		{
			result *= nb;
			nb--;
		}
	return(result);
}
int main(void)
{
	int nb;
	nb = 6;
	printf("%d", ft_iterative_factorial(nb));
}
