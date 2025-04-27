#include<stdio.h>
char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;
	m = 0;
	while(m < n)
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = 0;
	return(dest);
}
int main(void)
{
	char* src = "Hallo World";
	unsigned int n;
	n = 6;
	int size;
	size = sizeof *src / sizeof src[0];
	char dest[size];
	ft_strcpy(dest, src, n);
	printf("%s", dest);
}
