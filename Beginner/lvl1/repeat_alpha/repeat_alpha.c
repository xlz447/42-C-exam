/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 09:10:10 by exam              #+#    #+#             */
/*   Updated: 2018/08/28 09:16:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void pc(char c)
{
	write(1,&c,1);
}

int main(int c, char **v)
{
	if(c != 2)
	{
		pc('\n');
		return 0;
	}
	int i = 0;
	while(v[1][i] != '\0')
	{
		if(v[1][i] >= 'A' && v[1][i] <= 'Z')
		{
			int x = v[1][i] - 'A' + 1;
			while (x)
			{
				pc(v[1][i]);
				x--;
			}
		}
		else if(v[1][i] >= 'a' && v[1][i] <= 'z')
        {
            int x = v[1][i] - 'a' + 1;
            while (x)
            {
                pc(v[1][i]);
                x--;
            }
        }
		else
			pc(v[1][i]);
		i++;
	}
	pc('\n');
	return 1;
}