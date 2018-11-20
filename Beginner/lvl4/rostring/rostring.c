/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 19:46:47 by exam              #+#    #+#             */
/*   Updated: 2018/05/25 20:23:00 by exam             ###   ########.fr       */
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
	int j;
	int fws;
	int fwe;
	int needspace;

	needspace = 0;
	i = 0;
	j = 0;
	fws = 0;
	fwe = 0;
	if (argc < 2)
	{
		printchar('\n');
		return (0);
	}
	while (is_space(argv[1][i]))
		i++;
	if (argv[1][i] != '\0')
		fws = i;
	while (!is_space(argv[1][i]) && argv[1][i] != '\0')
		i++;
	fwe = i;
	while (argv[1][i] != '\0')
	{
		if (is_space(argv[1][i]))
		{
			if (!is_space(argv[1][i + 1]) && needspace)
			{
				printchar(' ');
				needspace = 0;
			}
		}
		else if (!is_space(argv[1][i]))
		{
			if (is_space(argv[1][i + 1]) || argv[1][i + 1] == '\0')
				needspace = 1;
			printchar(argv[1][i]);
		}
		i++;
	}
	if (needspace)
		printchar(' ');
	while (fws < fwe)
	{
		printchar(argv[1][fws]);
		fws++;
	}
	printchar('\n');
}
