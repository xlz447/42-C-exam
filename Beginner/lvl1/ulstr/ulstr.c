/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:10:17 by exam              #+#    #+#             */
/*   Updated: 2018/07/24 09:18:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void pc(char c)
{
	write(1, &c, 1);
}

int main(int argc, char** argv)
{
	int i = 0;

	if (argc != 2)
	{
		write(1,"\n",1);
		return(0);
	}
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			pc(argv[1][i] - 32);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			pc(argv[1][i] + 32);
		}
		else
		{
			write(1,&(argv[1][i]),1);
		}
		i++;
	}
	write(1,"\n",1);
	return (0);
}
