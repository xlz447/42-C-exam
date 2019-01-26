/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 09:18:17 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 09:31:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_anagram(char *a, char *b)
{
	char x[128];
	for (int i = 0; i < 128; i++)
		x[i] = 0;
	while (*a != '\0')
		x[(int)*a++]++;
	while (*b != '\0')
		x[(int)*b++]--;
	for (int i = 0; i < 128; i++)
		if (x[i] != 0)
			return 0;
	return 1;
}
/*
#include <stdio.h>
int main(int ac, char ** av)
{
	if (ac > 2)
		printf("|%i|\n", is_anagram(av[1], av[2]));
	return 0;
}
*/
