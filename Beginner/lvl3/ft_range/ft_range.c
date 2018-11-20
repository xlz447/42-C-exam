/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 19:25:15 by exam              #+#    #+#             */
/*   Updated: 2018/05/25 19:43:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *out;
	int i;
	int size;
	int nflag;

	i = 0;
	size = 0;
	nflag = 0;
	if (end < start)
	{
		size = -(end - start - 1);
		nflag = 1;
	}
	else
		size = end - start + 1;
	out = (int*)malloc(sizeof(*out) * (size));
	while (i < size)
	{
		if(nflag)
			out[i] = start - i;
		else
			out[i] = start + i;
		i++;
	}
	return (out);
}
