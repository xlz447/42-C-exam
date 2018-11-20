/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:21:38 by exam              #+#    #+#             */
/*   Updated: 2018/07/31 09:32:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int findchar(char f, char *s, int i)
{
	while(s[i] != '\0')
	{
		if (s[i] == f)
			return i + 1;
		i++;
	}
	return -1;
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 0;
	int j = 0;
	while(argv[1][i] != '\0')
	{
		j = findchar(argv[1][i], argv[2], j);
		if (j == -1)
			break;
		i++;
	}
	if (j != -1)
	{
		int x = 0;
		while (argv[1][x] != '\0')
		{
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return 1;
}
