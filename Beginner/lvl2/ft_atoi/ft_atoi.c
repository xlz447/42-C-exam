int	ft_atoi(const char *str)
{
	int neg = 0;
	int res = 0;

	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if (neg == 1)
		res *= -1;
	return res;
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int c, char **v)
{
	(void)c;
	printf("|%d|\n", ft_atoi(v[1]));
	printf("|%d|\n\n", atoi(v[1]));
	return 1;
}
*/
