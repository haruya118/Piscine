#include<unistd.h>

void put_char(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}
void change_nub_hun(char *one, char *ten, char *hun)
{
	(*hun)++;
	*ten = (*hun + 1);
	*one = (*hun + 2);
}
void change_nub(char *ten, char * hun)
{
	*ten = '0';
	(*hun)++;
}
void print_last()
	{
		write(1, "7", 1);
		write(1, "8", 1);
		write(1, "9", 1);
	}
int main(void)
{
	char hun;
	char ten;
	char one;

	hun = '0';
	ten = '1';
	one = '2';
	while(hun <= '7' && ten <= '8' && one <= '9')
	{
		if(hun == '7' && ten == '8' && one == '9')
			print_last();
		else if((hun < ten) == 1 && (ten < one) == 1)
			put_char(hun, ten, one);
		if(one != '9')
			one++;
		else
		{
			if(one == '9' && ten == '8')
				change_nub_hun(&one, &ten, &hun);
			else
				change_nub(&one, &ten);
		}
	}
}
