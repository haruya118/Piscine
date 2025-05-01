#include<stdio.h>
char	*ft_strupcase(char *str)
{
	int n;
	n = 0;
	while(str[n])
	{
		if((str[n] >= 'a' && str[n] <= 'z'))
			str[n] = str[n] - 'a' + 'A';
		n++;
	}
	return(str);
}
int main(void)
{
	char str[] = "Hal loWorld";
	ft_strupcase(str);
	printf("%s", str);
}
