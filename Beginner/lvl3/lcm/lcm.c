unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int t;

	if (a == 0 || b == 0)
		return 0;
	t = a > b ? b : a;
	while (42)
	{
		if (t % a == 0 && t % b == 0)
			return t;
		t += a > b ? b : a;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int c, char **v)
{
	(void)c;
	printf("|%u|\n",lcm(atoi(v[1]),atoi(v[2])));
}
*/
