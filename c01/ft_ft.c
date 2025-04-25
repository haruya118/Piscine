void		ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main (void)
{
	int  nbr;
	int answer;

	ft_ft(&nbr);
	answer = nbr;
	printf("%d", answer);
}
