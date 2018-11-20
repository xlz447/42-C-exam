/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:26:54 by exam              #+#    #+#             */
/*   Updated: 2018/05/25 18:44:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printchar(char c)
{
	write(1,&c,1);
}

int is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		printchar('\n');
		return (0);
	}
	while (is_space(argv[1][i]))
		i++;
	while (!is_space(argv[1][i]) && argv[1][i] != '\0')
	{
		printchar(argv[1][i]);
		i++;
	}
	printchar('\n');
}
