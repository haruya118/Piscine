#include<stdio.h>
int ft_strlen(char *str)
{
	int n;
	n = 0;
	while(str[n])
		n++;
	return(n);
}
int main (void)
{
	char *str = "AkJi 1";
	int answer;
	answer = ft_strlen(str);
	printf("%d", answer);
}
