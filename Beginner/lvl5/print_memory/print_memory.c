/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:02:01 by exam              #+#    #+#             */
/*   Updated: 2018/08/07 12:19:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char tohex(unsigned char in)
{
	if (in == 15)
		return 'f';
	else if (in == 14)
		return 'e';
	else if (in == 13)
		return 'd';
	else if (in == 12)
		return 'c';
	else if (in == 11)
		return 'b';
	else if (in == 10)
		return 'a';
	else 
		return (in + '0');
}

void mypc(char c)
{
	write(1, &c, 1);
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *in = (unsigned char *)addr;
	int i = 0;
	int j = 0;
	int x = 16;
	int copy = size;

	while(size)
	{
		while(i<x && size)
		{
			if(in[i] < 16)
			{
				mypc('0');
				mypc(tohex(in[i]));
			}
			else
			{
                mypc(tohex(in[i]/16));
                mypc(tohex(in[i]%16));
			}
			if (i%2==1)
                mypc(' ');
			i++;
			size--;
		}
		while(i < x)
		{
                mypc(' ');
                mypc(' ');
			if (i%2==1)
                mypc(' ');
			i++;
		}
		while(j < x && copy)
		{
			if (in[j] < 32 || in[j] > 126)
                mypc('.');
			else
                mypc(in[j]);
		j++;
		copy--;
		}
	x+=16;
	write(1, "\n", 1);
	}
}

/*
int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  42, 103};

	print_memory(tab, sizeof(tab));
	return (0);
}
*/
