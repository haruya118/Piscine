#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
	int tmp;
	tmp = nb;
	if(nb == 0)
	 	return(0);
	if(power == 0)
		return(1);
	if(power > 1)
		while(power >= 2)
			{
				nb *= tmp;
				power--;
			}
	return(nb);

}
int main(void)
{
	int nb;
	int power;
	nb = 3;
	power = 4;
	printf("%d", ft_iterative_power(nb, power));
}
