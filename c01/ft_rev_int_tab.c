#include<stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int n;
	int l;
	int tmp[size];
	n = 0;
	l = 0;
	while(n < size)
	{
		tmp[n]= tab[size - n - 1];
		n++;
	}
	while(l < size)
	{
		tab[l] = tmp[l];
		l++;
	}

}
int main(void)
{
	int tab[] ={1, 2, 3, 2, 3, 2, 3};
	int size;
	int m;

	m = 0;
	size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	while(m < size)
		{
		printf("%d", tab[m]);
		m++;
		}
}
