#include <stdio.h>
void	ft_ultimate_div_mod(int* a, int *b)
{
	int tmp_div;
	int tep_mod;
	tmp_div = *a / *b;
	tep_mod = *a % *b;
	*a = tmp_div;
	*b = tep_mod;
}
int main(void)
{
	int a;
	int b;
	a = 8;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}
