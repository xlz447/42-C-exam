/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:38:45 by exam              #+#    #+#             */
/*   Updated: 2018/07/31 09:59:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size = 0;
	int neg = 0;
	int *out;
	int i = 0;

	if (end >= start)
	{
		size = end - start + 1;
	}
	else
	{
		neg = 1;
		size =  start - end + 1;
	}
	
	out = (int*)malloc(sizeof(int) * size);
	if (!out)
		return NULL;
	while (size > 0)
	{
		out[i] = end;
		if(neg)
			end++;
		else
			end--;
		size--;
		i++;
	}
	return (out);
}

/*
#include <stdio.h>
int main (int argc, char** argv)
{
	int *res;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	res = ft_rrange(start, end);
	int size = 0;
	(void)argc;
	if (end >= start)
    {
        size = end - start + 1;
    }
    else
    {
        size =  start - end + 1;
    }
	int i = 0;
	while (i < size)
	{
		printf("%i ", res[i]);
		i++;
	}
	printf("size:%i\n", size);
}
*/
