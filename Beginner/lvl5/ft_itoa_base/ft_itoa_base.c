#include <stdlib.h>
char	*ft_itoa_base(int value, int base)
{
	char res[32] = {0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,0,
				 	0,0,0,0,0,0,0,0,
				 	0,0,0,0,0,0,0,0};
	char *out;
	char *ref = "0123456789ABCDEF";
	int i = 31;
	int neg = 0;

	if (value < 0)
	{
		if (base == 10)
		{
			neg = 1;
			if (value == -2147483648)
			{
				res[i--] = '8';
				value = -214748364;
			}
		}
		value *= -1;
	}
	if (value == 0)
	{
		out = (char*)malloc(sizeof(char)*2);
		out[0] = '0';
		out[1] = '\0';
		return out;
	}
	while(value > 0)
	{
		res[i--] = ref[value % base];
		value /= base;
	}
	if(neg)
		res[i--] = '-';
	out = (char*)malloc(sizeof(char)*(32-i));
	i += 1;
	int j = 0;
	while(i < 32)
	{
		out[j++] = res[i++];
	}
	out[j] = '\0';
	return out;
}

/*
#include <stdio.h>
int main (int c, char **v)
{
	(void)c;
	printf("|%s|\n", ft_itoa_base(atoi(v[1]),atoi(v[2])));
	return 0;
}
*/
