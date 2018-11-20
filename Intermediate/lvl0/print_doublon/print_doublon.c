/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 09:03:37 by exam              #+#    #+#             */
/*   Updated: 2018/11/13 09:16:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int i = 0;
	int j = 0;
	int flag = 0;

	while(i < na && j < nb)
	{
		if(a[i] == b[j])
		{
			if (flag == 0)
			{
				printf("%i", a[i]);
				flag = 1;
			}
			else
			{
				printf(" %i", a[i]);
			}
			i++;
			j++;
		}
		else
		{
			if (a[i] > b[j])
				j++;
			else
				i++;
		}
	}
	printf("\n");
}

/*
int main(void)
{
	int a[] = {100,200,300,1200,5000};
	int b[] = {2,4,5,6,7,10,40,70};

	print_doublon(a,5,b,8);
}
*/
