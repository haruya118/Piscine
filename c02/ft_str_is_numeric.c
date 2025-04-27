#include<stdio.h>
int 	ft_str_is_numeric(char *str)
{
	int n;
	n = 0;
	while(str[n])
	{
		if((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
			n++;
		else
			return(0);
	}
	return(1);
}
int main(void)
{
	char *str = "Hal loWorld";
	int answer;
	answer = ft_str_is_numeric(str);
	printf("%d", answer);
}
