#include <unistd.h>
void num_change(char *first, char *second, char *third, char *forth)
{
	(*second)++;
	*forth = *second + 1;
	*third = *first;
	if(*forth > '9')
	{
		*forth = '0';
		(*third)++;
	}
}

void num_add(char *ten, char *one)
{
	(*ten)++;
	*one = '0';
}
void num_print(char first, char second, char third, char forth)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, &forth, 1);
	write(1, ",", 1);
}
void num_add_extra(char *first, char *second, char *third, char *forth)
{
	(*first)++;
	*second = '0';
	*third = *first;
	*forth = '1';
}

int main(void)
{
	char first;
	char second;
	char third;
	char forth;

	first = '0';
	second = '0';
	third = '0';
	forth = '1';
	while('9' >= first && '9' >= second && '9' >= third && '9' >= forth)
	{
		num_print(first, second, third, forth);
		if(second == '9' && third == '9' && forth == '9')
			num_add_extra(&first, &second, &third, &forth);
		else if(third == '9' && forth == '9')
			num_change(&first, &second, &third, &forth);
		if(forth == '9')
			num_add(&third, &forth);
		else
			forth++;
	}
}
