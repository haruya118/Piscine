#include <unistd.h>
void main (char c)
{
	write (1, &c, 1);
}
