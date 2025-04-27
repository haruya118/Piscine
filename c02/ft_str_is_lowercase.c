#include<stdio.h>
int 	ft_str_is_lowercase(char *str)
{
	int n;
	n = 0;
	while(str[n])
	{
		if(str[n] >= 'a' && str[n] <= 'z')
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
	answer = ft_str_is_lowercase(str);
	printf("%d", answer);
}
