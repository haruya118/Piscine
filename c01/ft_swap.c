#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(void)
{
	int a;
	int b;

	a = 8;
	b = 9;
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
}
