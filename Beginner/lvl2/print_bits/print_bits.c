/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:27:58 by exam              #+#    #+#             */
/*   Updated: 2018/06/08 10:41:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void mypc(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	char out[8] = {'0', '0', '0', '0', '0', '0', '0', '0'};
	int i = 0;

	while (octet > 0)
	{
		out[i] = (octet % 2) + '0';
		octet = octet / 2;
		i++;
	}
	i = 7;
	while (i >=0)
	{
		mypc(out[i]);
		i--;
	}
}

/*
int main ()
{
	int i = 0;

	while (i < 256)
	{
		print_bits((unsigned char)i);
		mypc('\n');
		i++;
	}
	return 0;
}*/
