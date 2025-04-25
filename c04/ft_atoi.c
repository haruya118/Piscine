int ft_atoi(char *str)
{
	int n;
	int sign;
	int answer;

	n = 0;
	answer = 0;
	sign = 1;
	while(str[n])
	{
		if(str[n] == ' ')
			n++;
		else if(str[n] == '-' || str[n] == '+')
			{
				if(str[n] == '-')
					sign = sign * -1;
				n++;
			}
		else
			{
			answer = answer * 10;
			answer = answer + (str[n] - '0');
			n++;
			}
	}
	answer = sign * answer;
	return(answer);
}
#include<stdio.h>
int main(void)
{
	char* str;
	int answer;
	str = "    +--++--1274737";
	answer = ft_atoi(str);
	printf("%d", answer);
}
