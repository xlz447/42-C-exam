/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:03:39 by exam              #+#    #+#             */
/*   Updated: 2018/07/31 10:35:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	if (argc != 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return 0;
	}	
	int i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	i = i - 1;
	int start = i;
	int j;
	while (42)
	{
		if (argv[1][i] == ' ' || i == 0)
		{
			if (i == 0)
				j = i;
			else
				j = i + 1;
			while(j <= start)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			if (i==0)
				break;
			else
				write(1, " ", 1);
			start = i - 1;
		}
		i--;
	}
	write(1, "\n", 1);
	return 1;
}
