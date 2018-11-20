/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 18:33:42 by exam              #+#    #+#             */
/*   Updated: 2018/06/01 19:00:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void mypc(char c)
{
	write (1,  &c,  1);
}

int main (int argc, char **argv)
{
	int table [128];
	int i = 0;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < 128)
	{
		table[i] = 0;
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (table[(int)argv[1][i]] != 5)
		{
			mypc(argv[1][i]);
			table[(int)argv[1][i]] = 5;
		}
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (table[(int)argv[2][i]] != 5)
		{
			mypc(argv[2][i]);
			table[(int)argv[2][i]] = 5;
		}
		i++;
	}
	write(1, "\n", 1);
}
