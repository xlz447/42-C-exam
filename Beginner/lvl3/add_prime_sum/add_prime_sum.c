/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:44:03 by exam              #+#    #+#             */
/*   Updated: 2018/06/08 11:33:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void mypc(char c)
{
	write(1, &c, 1);
}

int myatoi(char *in)
{
	int out = 0;
	int i = 0;

	while (in[i] != '\0')
	{
		if (in[i]< '0' || in[i] >'9')
		{
			return (0);
		}
		out = out * 10 + (in[i] - '0'); 
		i++;
	}
	return (out);
}

int isp(int in)
{
	int i = in - 1;

	while (i > 1)
	{
		if (in % i == 0)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

void mypn(int in)
{
	int copy = in;
   	int size = 1;
	
	while (copy >= 10)
	{
		copy /= 10;
		size *= 10;
	}
	while (size > 0)
	{
		mypc((in / size) + '0');
		in %= size;
		size /= 10;
	}
}

int main(int argc, char** argv)
{
	int in;
	int out;
	if (argc != 2)
	{
		mypc('0');
		mypc('\n');
		return (0);
	}
	if (myatoi(argv[1]) == 0)
	{
		mypc('0');
		mypc('\n');
		return (0);
	}
	out = 0;
	in = myatoi(argv[1]);
	while (in > 1)
	{
		if (isp(in))
		{
			out += in;
		}
		in--;
	}
	mypn(out);
	mypc('\n');
	return (1);
}


