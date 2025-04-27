#include<stdio.h>
char	*ft_strcapitalize(char *str)
{
	int n;
	n = 0;

	if(str[0] >= 'a' && str [0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	n++;
	while(str[n])
	{
		if((str[n] >= ' ' && str[n] <= '/'))
			{
				n++;
				if(str[n] >= 'a' && str [n] <= 'z')
					str[n] = str[n] - 'a' + 'A';
			}
		n++;
	}
	return(str);
}
int main(void)
{
	char str[] = "hal loWorld";
	ft_strcapitalize(str);
	printf("%s", str);
}
