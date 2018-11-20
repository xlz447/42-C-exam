/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:18:42 by exam              #+#    #+#             */
/*   Updated: 2018/11/20 09:44:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int ac, char ** av)
{
	char order[128];
	char count[128];
	int i = -1;
	int j = 42;
	if (ac != 2)
		return (printf("\n"));
	for(int k = 0; k < 128; k++)
	{
		order[k] = 0;
		count[k] = 0;
	}
	while(av[1][++i] != '\0')
		if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] += 32;
	i = -1;
	while(av[1][++i] != '\0')
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			if (order[(int)av[1][i]] < 42)
			{
				order[(int)av[1][i]] = j++;
				count[(int)av[1][i]]++;
			}
			else
				count[(int)av[1][i]]++;
		}
	}
	int flag = 0;
	for(int lol = 42; lol < 68; lol++)
	{
		for(int k = 'a'; k <= 'z'; k++)
		{
			if(order[k] == lol)
			{
				if (flag == 0)
					flag = printf("%i%c", count[k], k) + 1;
				else
					printf(", %i%c", count[k], k);	
			}
		}
	}
	return(printf("\n"));
}
