/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:03:57 by exam              #+#    #+#             */
/*   Updated: 2018/11/20 09:14:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    equation(int n)
{
	for (int a = 0; a < 10; a++)
		for (int b = 0; b < 10; b++)
			for (int c = 0; c < 10; c++)
				if (a * 10 + b + c * 10 + a == n)
					printf("A = %i, B = %i, C = %i\n", a, b, c);
}
/*
#include <stdlib.h>
int main(int ac, char** av)
{
	(void)ac;
	equation(atoi(av[1]));
}
*/
