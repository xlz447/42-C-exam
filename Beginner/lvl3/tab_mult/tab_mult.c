/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:37:24 by exam              #+#    #+#             */
/*   Updated: 2018/07/24 10:12:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void pc(char c)
{
	write(1, &c, 1);
}

void pnbr(int n)
{
	int size = 1;

	if(n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		pc('-');
		n = -1 * n;
	}
	while(n / size >= 10)
	{
		size *= 10;
	}
	while(size > 0)
	{
		pc((n/size) + '0');
		n = n % size;
		size /= 10;
	}
}

int	ai(char *in)
{
	int out = 0;
	int i = 0;
	int n = 0;

	if(in[i] == '+' || in[i] == '-')
	{
		if (in[i] == '-')
		{
			n = 1;
		}
		i++;
	}
	while(in[i] >= '0' && in[i] <= '9')
	{
		out = out * 10 + (in[i] - '0');
		i++;
	}
	if(n)
		return (-out);
	else
		return (out);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		pc('\n');
		return (0);
	}
	int base = ai(argv[1]);
	int i = 1;
	while (i < 10)
	{
		pnbr(i);
		write(1, " x ", 3);
		pnbr(base);
		write(1, " = ", 3);
		pnbr(i * base);
		pc('\n');
		i++;
	}
	return (1);
}
