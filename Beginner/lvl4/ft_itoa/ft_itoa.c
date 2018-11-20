/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:10:02 by exam              #+#    #+#             */
/*   Updated: 2018/09/04 10:36:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char ref[11];
	int i = 10;
	int neg = 0;
	char * out;
	if (nbr == 0)
	{
		out = (char*)malloc(sizeof(char) * 2);
		out[0] = '0';
		out[1] = '\0';
		return out;
	}
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ref[i] = '8';
			i--;
			nbr = -214748364;
		}
		nbr *= -1;
		neg = 1;
	}
	while (nbr > 0)
	{
		ref[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	if (neg)
	{
		ref[i] = '-';
		i--;
	}
	out = (char*)malloc(sizeof(char) * (11 - i));
	i += 1;
	int j = 0;
	while (i < 11)
	{
		out[j] = ref[i];
		j++;
		i++;
	}
	out[j] = '\0';
	return out;
}
/*
#include <stdio.h>
int main (int c, char ** v)
{
	(void)c;
	char * res = ft_itoa(atoi(v[1]));
	printf("%s\n", res);
	free(res);
	return 0;
}
*/
