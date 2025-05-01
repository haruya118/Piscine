#include<stdio.h>
char	*ft_strlowcase(char *str)
{
	int n;
	n = 0;
	while(str[n])
	{
		if((str[n] >= 'A' && str[n] <= 'Z'))
			str[n] = str[n] - 'A' + 'a';
		n++;
	}
	return(str);
}
int main(void)
{
	char str[] = "Hal loWorld";
	ft_strlowcase(str);
	printf("%s", str);
}
