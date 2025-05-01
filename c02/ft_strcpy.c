#include<stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int n;
	n = 0;
	while(src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return(dest);
}
int main(void)
{
	char* src = "Hallo World";
	int size;
	size = sizeof *src / sizeof src[0];
	char dest[size];
	ft_strcpy(dest, src);
	printf("%s", dest);
}
