/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:40:45 by exam              #+#    #+#             */
/*   Updated: 2018/08/28 11:22:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int isprime(unsigned int in)
{
	unsigned int i = 2;
	while(i*i <= in)
	{
		if (in%i == 0)
			return -1;
		i++;
	}
	return 1;
}

int main (int c, char **v)
{
	if (c != 2)
	{
		printf("\n");
		return 0;
	}
	unsigned int in = atoi(v[1]);
	if(in < 2 || isprime(in) == 1)
	{
		printf("%i\n", in);
		return 1;
	}
	int x = 2;
	int flag = 0;
	while (in > 1)
	{
		if (isprime(x) == 1 && in%x ==0)
		{
			if (flag)
				printf("*");
			if (!flag)
				flag = 1;
			printf("%i", x);
			in/=x;
		}
		else
			x++;
	}
	printf("\n");
	return 1;
}
