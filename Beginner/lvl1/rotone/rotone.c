/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:09:43 by exam              #+#    #+#             */
/*   Updated: 2018/07/31 09:18:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 0;
	while(argv[1][i] != '\0')
	{
		char p;
		if(argv[1][i] >= 'a' && argv[1][i] < 'z')
		{
			p = argv[1][i]+1;
			write(1, &p, 1);
		}
		else if(argv[1][i] >= 'A' && argv[1][i] < 'Z')
		{
			p = argv[1][i]+1;
            write(1, &p, 1);
		}
		else if(argv[1][i] == 'z')
			write(1, "a", 1);	
		else if(argv[1][i] == 'Z')
			write(1, "A", 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 1;
}
