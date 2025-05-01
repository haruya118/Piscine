#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	if(nb == 0)
		return(1);
	else
		return(nb * ft_iterative_factorial(nb - 1));
}
int main(void)
{
	int nb;
	nb = 6;
	printf("%d", ft_iterative_factorial(nb));
}
